import matplotlib.pyplot as plt

# 1. Fill in your data here
# Add the number of units (X-axis)
number_of_units = [1, 10, 20, 50, 100, 200,500,1000] 

# Add the corresponding unit cost in dollars (Y-axis)
cost_per_unit = [32.33, 17.08, 16.72, 14.62, 12.95, 12.82, 12.21,12.07] 

# Quick check to prevent length mismatch errors
if len(number_of_units) != len(cost_per_unit):
    print("Error: Both lists must have the exact same number of elements!")
else:
    # 2. Create the plot
    plt.figure(figsize=(10, 6)) # Window size
    
    # Draw the line with markers ('o') to clearly see each data point
    plt.plot(number_of_units, cost_per_unit, marker='o', linestyle='-', color='b', linewidth=2)
    
    # 3. Customize the display (English labels)
    plt.title('Unit Cost vs. Volume', fontsize=14, fontweight='bold')
    plt.xlabel('Number of Units', fontsize=12)
    plt.ylabel('Cost per Unit ($)', fontsize=12)
    
    # Add a grid for easier reading
    plt.grid(True, linestyle='--', alpha=0.7)
    
    # Add price tags directly on the points (optional but highly visual)
    for x, y in zip(number_of_units, cost_per_unit):
        plt.text(x, y, f' ${y}', verticalalignment='bottom', horizontalalignment='left', fontsize=10)

    # 4. Show the result
    plt.tight_layout()
    plt.show()