
# Gym User Database Management Application

![Application Screenshot](https://github.com/user-attachments/assets/50a26dcc-e390-45d3-a829-69f8e8385c2f)
 <!-- Optional: Add a screenshot -->

## Description

This is a Gym User Database Management application built with **C++ Builder**. The application allows administrators to perform CRUD (Create, Read, Update, Delete) operations on a database of gym users. The data is stored in an **InterBase** database, and SQL is used for database interactions. Users are categorized under different membership types, providing a convenient way to manage user subscriptions and memberships.

## Features

- **User Management**: 
  - Add new users.
  - Edit existing user details.
  - Delete users from the database.
- **Membership Management**:
  - Categorize users by membership types (e.g., Basic, Premium, VIP).
  - Filter users by membership type.
- **Data Display**:
  - View all users in a tabular format with sorting and filtering capabilities.
- **Database Integration**:
  - Uses **InterBase** as the backend database with efficient SQL queries.

## Technologies Used

- **Programming Language**: C++ (Embarcadero C++ Builder)
- **Database**: InterBase
- **UI Components**: VCL (Visual Component Library)
- **SQL**: Used for CRUD operations and data retrieval.

## Installation

### Prerequisites
- **C++ Builder**: Ensure you have Embarcadero RAD Studio or C++ Builder installed.
- **InterBase Database**: Set up an InterBase server or a local `.gdb`/`.ib` database file.

### Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/gym-user-management.git
   ```
2. Open the project file (`.cbproj`) in C++ Builder.
3. Set up the database connection:
   - Configure the `TIBDatabase` component with the path to your InterBase database.
   - Set the `Username` and `Password` properties in the `Params`.
4. Build and run the application.

## Database Schema

### Users Table
| Column          | Data Type       | Description                 |
|-----------------|----------------|-----------------------------|
| `UserID`        | `INTEGER`      | Primary key (auto-increment). |
| `First Name`    | `VARCHAR(100)` | first name of the user.      |
| `Last Name`     | `VARCHAR(100)` | Last Name of the user.  |
| `MembershipID`  | `INTEGER`      | Foreign key to MembershipTypes table. |

### MembershipTypes Table
| Column          | Data Type       | Description                 |
|-----------------|----------------|-----------------------------|
| `MembershipID`  | `INTEGER`      | Primary key (auto-increment). |
| `TypeName`      | `VARCHAR(50)`  | Membership type (e.g., Weekly, MOnthly,Yearly). |

## Usage

1. **Launch the application.**
2. **View Users**:
   - All users are displayed in a table format.
   - Use the dropdown to filter users by membership type.
3. **Add User**:
   - Click the "Add User" button.
   - Fill in the user details and click "Save."
4. **Edit User**:
   - Select a user from the table and click "Edit User."
   - Modify the details and click "Save."
5. **Delete User**:
   - Select a user from the table and click "Delete User."
   - Confirm the deletion.

## Screenshots

<!-- Add some screenshots here -->
Adding User
!["Adding User"](https://github.com/user-attachments/assets/c2714ed5-fc70-44c1-a815-fa9e54144e3b)
Changed DB When NEW user is Added
!["Changed DB When NEW user is Added"](https://github.com/user-attachments/assets/323615fd-c9ba-4fe6-a2af-c11e3715adc2)


## Future Enhancements

- **Search Functionality**: Add a search bar to quickly find users by name or email.
- **Admin Authentication**: Secure the application with role-based access.
- **Reports**: Generate membership and revenue reports.

## Contributing

Contributions are welcome! Feel free to fork this repository and submit a pull request.
