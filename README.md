# Smart Library Management System

A modular, console-based Command Line Interface (CLI) application developed in **C++** implementing core Object-Oriented Programming (OOP) paradigms and persistent file handling. 

## 🚀 Features
- **Role-Based Authentication**: Custom view modules for Students and Librarians utilizing inheritance mechanisms.
- **Dynamic Book Inventory**: Real-time CRUD capabilities tracking book titles, unique IDs, authorship, and availability metrics.
- **Automated Record Persistence**: Native file handling (`fstream`) to serialize/deserialize data points smoothly between active runtimes.
- **Optimized Searching Logic**: Quick lookup algorithms optimized for clean console workflows.

## 🛠️ Core Concepts Demonstrated
* **Inheritance & Polymorphism**: Implemented a virtual runtime interface (`User` base class) with customized derived classes (`StudentUser`, `LibrarianUser`).
* **Encapsulation**: Strict use of access modifiers protecting critical data states.
* **File I/O Stream Mapping**: Structured flat file formatting serving as a lightweight persistence engine.

## 📁 Project Architecture
```text
├── src/                      # Implementation details (.cpp)
├── include/                  # Abstract definitions and headers (.h)
├── data/                     # Persistent database stores (.txt)
└── README.md
