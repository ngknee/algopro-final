#include<stdio.h>
#include<string.h>

struct data{
	char location1[100];
	char location2[100];
	long price;
	int rooms;
	int bathroom;
	int carpark;
	char type[100];
	char furnish[100];
} table[4000];

void menu(){ // Print menu
	printf("What do you want to do?\n");
	printf("1. Display data\n");
	printf("2. Search data\n");
	printf("3. Sort data\n");
	printf("4. Export data\n");
	printf("5. Exit\n");
}

void header(){ // Print headers
	printf("%-25s %-15s %-10s %-6s %-12s %-12s %-12s %-12s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
}

void display(int size){
	int rows;
	printf("Number of rows: ");
	scanf("%d", &rows); // Input number of rows to print (n)
	header();
	
	// Display data
	for(int j=0; j<rows; j++){
		if(j<size){ // Stops the program when i >= total number of rows
			printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
		}
	}
}

void search(int size, char column[], char query[]){ // Search function for string data types
    int datafound = 0;

    for(int j=0; j<size; j++){
        if(strcmpi(column, "Location") == 0 && strcmpi(query, table[j].location1) == 0){ // Checks if query exists in the column "Location"
            if(datafound == 0){
            	printf("Data found. Detail of data:\n");
            	header();
            	datafound = 1;
			}
            printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
        }
		else if(strcmpi(column, "City") == 0 && strcmpi(query, table[j].location2) == 0){ // Checks if and query exists in the column "City"
            if(datafound == 0){
            	printf("Data found. Detail of data:\n");
            	header();
            	datafound = 1;
			}
            printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
        }
		else if(strcmpi(column, "Type") == 0 && strcmpi(query, table[j].type) == 0){ // Checks if query exists in the column "Type"
            if(datafound == 0){
            	printf("Data found. Detail of data:\n");
            	header();
            	datafound = 1;
			}
            printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
        }
		else if(strcmpi(column, "Furnish") == 0 && strcmpi(query, table[j].furnish) == 0){ // Checks if query exists in the column "Furnish"
            if(datafound == 0){
            	printf("Data found. Detail of data:\n");
            	header();
            	datafound = 1;
			}
            printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
        }
    }
    
    // If no matching data is found
    if(datafound == 0){
    	printf("Data not found!\n");
	}
}

void searchInt(int size, char column[], int target){ // Search function for integer data types
    int datafound = 0;

    for(int j=0; j<size; j++){
        if(strcmpi(column, "Price") == 0 && target == table[j].price){ // Checks if query exists in the column "Price"
            if(datafound == 0){
            	printf("Data found. Detail of data:\n");
            	header();
            	datafound = 1;
			}
            printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
        }
		else if(strcmpi(column, "Rooms") == 0 && target == table[j].rooms){ // Checks if query exists in the column "Rooms"
            if(datafound == 0){
            	printf("Data found. Detail of data:\n");
            	header();
            	datafound = 1;
			}
            printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
        }
		else if(strcmpi(column, "Bathroom") == 0 && target == table[j].bathroom){ // Checks if query exists in the column "Bathroom"
            if(datafound == 0){
            	printf("Data found. Detail of data:\n");
            	header();
            	datafound = 1;
			}
            printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
        }
		else if(strcmpi(column, "Carpark") == 0 && target == table[j].carpark){ // Checks if query exists in the column "Carpark
            if(datafound == 0){
            	printf("Data found. Detail of data:\n");
            	header();
            	datafound = 1;
			}
            printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
			table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
        }
    }
    
    // If no matching data is found
    if(datafound == 0){
    	printf("Data not found!\n");
	}
}

void merge(char column[], char order[], struct data table[], int low, int mid, int high){
	int leftSize = mid - low + 1;
	int rightSize = high - mid;
	
	// Create temporary arrays
	struct data left[leftSize];
	struct data right[rightSize];
	
	// Copy data into temporary arrays
	for(int i=0; i<leftSize; i++){
		left[i] = table[low+i];
	}
	for(int i=0; i<rightSize; i++){
		right[i] = table[mid+1+i];
	}
	
	// Merge temporary arrays together
	int leftIdx = 0;
	int rightIdx = 0;
	int mainIdx = low;
	
	// Sort by ascending order
	if(strcmpi(order, "asc") == 0 || strcmpi(order, "ascending") == 0){
		// Price
		if(strcmpi(column, "Price") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(left[leftIdx].price < right[rightIdx].price){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Rooms
		else if(strcmpi(column, "Rooms") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(left[leftIdx].rooms < right[rightIdx].rooms){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Bathroom
		else if(strcmpi(column, "Bathroom") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(left[leftIdx].bathroom < right[rightIdx].bathroom){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Carpark
		else if(strcmpi(column, "Carpark") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(left[leftIdx].carpark < right[rightIdx].carpark){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Location
		else if(strcmpi(column, "Location") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(strcmp(left[leftIdx].location1, right[rightIdx].location1) < 0){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// City
		else if(strcmpi(column, "City") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(strcmp(left[leftIdx].location2, right[rightIdx].location2) < 0){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Type
		else if(strcmpi(column, "Type") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(strcmp(left[leftIdx].type, right[rightIdx].type) < 0){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Furnish
		else if(strcmpi(column, "Furnish") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(strcmp(left[leftIdx].furnish, right[rightIdx].furnish) < 0){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
	}
	// Sort by descending order
	else if(strcmpi(order, "desc") == 0 || strcmpi(order, "descending") == 0){
		// Price
		if(strcmpi(column, "Price") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(left[leftIdx].price > right[rightIdx].price){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Rooms
		else if(strcmpi(column, "Rooms") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(left[leftIdx].rooms > right[rightIdx].rooms){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Bathroom
		else if(strcmpi(column, "Bathroom") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(left[leftIdx].bathroom > right[rightIdx].bathroom){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Carpark
		else if(strcmpi(column, "Carpark") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(left[leftIdx].carpark > right[rightIdx].carpark){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Location
		else if(strcmpi(column, "Location") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(strcmp(left[leftIdx].location1, right[rightIdx].location1) > 0){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// City
		else if(strcmpi(column, "City") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(strcmp(left[leftIdx].location2, right[rightIdx].location2) > 0){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Type
		else if(strcmpi(column, "Type") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(strcmp(left[leftIdx].type, right[rightIdx].type) > 0){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
		// Furnish
		else if(strcmpi(column, "Furnish") == 0){
			while(leftIdx < leftSize && rightIdx < rightSize){
				// If value on left array is smaller than right array
				if(strcmp(left[leftIdx].furnish, right[rightIdx].furnish) > 0){
					table[mainIdx] = left[leftIdx];
					leftIdx++;
				}
				// If value on right array is smaller than left array
				else{
					table[mainIdx] = right[rightIdx];
					rightIdx++;
				}
				mainIdx++;
			}
			
			while(leftIdx < leftSize){ // If there are values remaining in left array
				table[mainIdx] = left[leftIdx];
				leftIdx++;
				mainIdx++;
			}
			while(rightIdx < rightSize){ // If there are values remaining in right array;
				table[mainIdx] = right[rightIdx];
				rightIdx++;
				mainIdx++;
			}
		}
	}
}

void mergeSort(char column[], char order[], struct data table[], int low, int high){
	if(low < high){
		int mid = low + (high-low) / 2;
		
		mergeSort(column, order, table, low, mid);
		mergeSort(column, order, table, mid+1, high);
		
		merge(column, order, table, low, mid, high);
	}
}

void Export(int size){
	char filename[100];
	
	printf("File name: ");
	scanf("%s", filename); // Input file name
	
	strcat(filename, ".csv"); // Add ".csv" to file name
	
	FILE *fp2 = fopen(filename,"w");
	
	if(fp2 == NULL){ // If file not opened
		printf("File Error.\n");
		return;
	}
	
	fprintf(fp2, "Location, City, Price, Rooms, Bathroom, Carpark, Type, Furnish\n"); // Write headers into the first line
	
	// Write the data
	for(int i=0; i<size; i++){
		fprintf(fp2, "%s,%s,%ld,%d,%d,%d,%s,%s\n", table[i].location1, table[i].location2, table[i].price, table[i].rooms,
		table[i].bathroom, table[i].carpark, table[i].type, table[i].furnish);
	}
	fclose(fp2);
	
	printf("Data successfully written to file %s!\n", filename);
}

int main(){
	FILE *fp = fopen("file.csv","r");
	
	char baris1[100];
	fscanf(fp, "%[^\n]\n", baris1); // Skip the first line
	
	int i = 0;
	while(!feof(fp)){ // Reads the rest of the data until end of file
		fscanf(fp, "%[^,],%[^,],%ld,%d,%d,%d,%[^,],%[^\n]\n", table[i].location1, table[i].location2, &table[i].price, &table[i].rooms,
		&table[i].bathroom, &table[i].carpark, table[i].type, table[i].furnish);
		i++;
	}
	fclose(fp);
	
	int choice = 0;
	while(choice != 5){ // Program repeats until user chooses 5 to exit
		menu();
		
		printf("Your choice: ");
		scanf("%d", &choice);
		
		if(choice == 1){
			display(i); // Display
			
			printf("\n");
		}
		else if(choice == 2){
			char column[100];
			char query[100];
			int target;
			
			printf("Choose column: ");
			scanf("%s", column); // Input column
			
			// If column's data type is string
			if(strcmp(column, "Location") == 0 || strcmp(column, "City") == 0 || strcmp(column, "Type") == 0 || strcmp(column, "Furnish") == 0){
				printf("What data do you want to find? ");
				scanf("%s", query); // Input query
				search(i, column, query); // Search
			}
			// If column's data type is integer
			else if(strcmp(column, "Price") == 0 || strcmp(column, "Rooms") == 0 || strcmp(column, "Bathroom") == 0 || strcmp(column, "Carpark") == 0){
				printf("What data do you want to find? ");
				scanf("%d", &target); // Input query
				searchInt(i, column, target); // Search
			}
			
			printf("\n");
		}
		else if(choice == 3){
			char column[100];
			char order[100];
			
			printf("Choose column: ");
			scanf("%s", column); // Input column
			
			printf("Sort ascending or descending? ");
			scanf("%s", order); // Input either ascending or descending
			
			mergeSort(column, order, table, 0, i-1);
			
			for(int j=0; j<10; j++){
				printf("%-25s %-15s %-10ld %-6d %-12d %-12d %-12s %-12s\n", table[j].location1, table[j].location2, table[j].price, table[j].rooms,
				table[j].bathroom, table[j].carpark, table[j].type, table[j].furnish);
			}
			printf("\n");
		}
		else if(choice == 4){
			Export(i);
			
			printf("\n");
		}
	}
	
	return 0;
}
