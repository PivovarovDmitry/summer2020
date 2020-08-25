
double p(double rho); // задам эту функцию позднее

void derivative(double* input, double* output, int dimension); // Лажок

void right_part(double* rho, double* velocity, int dimention); // Педченко

void time_step(double* rho_old, double* velocity_old,
               double* rho_new, double* velocity_new, int dimention); // Чудесова

// Усачев фактически реализует функцию main, т.е. тело самой программы
