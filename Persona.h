
class Persona{
	char nombre[30];
	int telefono;
	char direccion[40];
	char RFC[20];
	int ID;
	public:
		Persona(){};
		Persona(char _nombre[30], int _telefono, char _direccion[40], char _RFC[20], int _ID);
		virtual void mostrar() const;
};

