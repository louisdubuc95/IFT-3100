#include "gui.h"

// Constructeur de la classe
Gui::Gui()
{
}

// Fonction invoqu�e � l'initialisation de l'application
void Gui::setup()
{
	ofSetWindowTitle("Gui");
	
	offsetX = 30;
	defaultCircleRadius = 205 / 2;
	defaultFov = 60;

	// Param�trisation par d�faut de l'image
	defaultPosX = 50;
	defaultPosY = 50;
	defaultSizeImageWidth = 150;
	defaultSizeImageHeight = 150;
	defaultHueImage = 0;
	defaultSaturationImage = 0;
	defaultBrightnessImage = 255;
	defaultAlphaImage = 255;

	reset();
}

void Gui::reset() {
	// Image
	guiImage.setup("Image", "", offsetX, 20);
	guiImage.add(exportButton.setup("Exportation")); exportCheck = false;
	guiImage.add(posImageX.setup("Position X de l'image", defaultPosX, 0, 600));
	guiImage.add(posImageY.setup("Position Y de l'image", defaultPosY, 0, 600));
	guiImage.add(sizeImageWidth.setup("Longueur de l'image", defaultSizeImageWidth, 25, 600));
	guiImage.add(sizeImageHeight.setup("Largeur de l'image", defaultSizeImageHeight, 25, 600));
	guiImage.add(hueImage.setup("Hue", defaultHueImage, 0, 255));
	guiImage.add(saturationImage.setup("Saturation", defaultSaturationImage, 0, 255));
	guiImage.add(brightnessImage.setup("Brightness", defaultBrightnessImage, 0, 255));
	guiImage.add(alphaImage.setup("Alpha", defaultAlphaImage, 0, 255));

	// Cercle UI
	guiCircle.setup("Sphere", "", offsetX, 250);
	guiCircle.add(circleRadius.setup("circle radius", defaultCircleRadius, 5, 200));

	// Cam�ra
	guiCamera.setup("Camera", "", offsetX, 320);
	guiCamera.add(fovSlider.setup("Field of view", defaultFov, 0, 120));


	// Primitive
	guiPrimitive.setup("Primitives Vectorielles", "", offsetX, 400);
	// Rectangle
	guiPrimitive.add(primitiveCarreButton.setup("Rectangle")); primitiveCarreCheck = false;
	guiPrimitive.add(posXSlider.setup("Pos X Rectangle", -600, -600, 600));
	guiPrimitive.add(posYSlider.setup("Pos Y Rectangle", 312, -600, 600));
	// Ellipse
	guiPrimitive.add(primitiveEllipse.setup("Ellipse")); primitiveEllipseCheck = false;
	guiPrimitive.add(posXEllipseSlider.setup("Pos X Ellipse", 450, -600, 600));
	guiPrimitive.add(posYEllipseSlider.setup("Pos Y Ellipse", 600, -1000, 1000));
	// Triangle
	guiPrimitive.add(primitiveTriangle.setup("Triangle")); primitiveTriangleCheck = false;
	guiPrimitive.add(tx1.setup("Sommet #1 - Coord 'x'", 306, -600, 600));
	guiPrimitive.add(ty1.setup("Sommet #1 - Coord 'y'", 300, -600, 600));
	guiPrimitive.add(tx2.setup("Sommet #2 - Coord 'x'", 552, -600, 600));
	guiPrimitive.add(ty2.setup("Sommet #2 - Coord 'y'", -174, -600, 600));
	guiPrimitive.add(tx3.setup("Sommet #3 - Coord 'x'", -156, -600, 600));
	guiPrimitive.add(ty3.setup("Sommet #3 - Coord 'y'", -174, -600, 600));
	
	
}

// Fonction de mise � jour du gui
void Gui::update()
{
}

// Fonction de dessin du gui
void Gui::draw()
{
	guiImage.draw();
	guiCircle.draw();
	guiCamera.draw();
	guiPrimitive.draw();
}

// Retourne la position en X de l'image
int Gui::getPosImageX()
{
	return posImageX;
}
// Retourne la position en Y de l'image
int Gui::getPosImageY()
{
	return posImageY;
}
// Retourne la longueur de l'image
int Gui::getSizeImageWidth()
{
	return sizeImageWidth;
}
// Retourne la largeur de l'image
int Gui::getSizeImageHeight()
{
	return sizeImageHeight;
}
// Retourne Hue de l'image
int Gui::getHueImage()
{
	return hueImage;
}
// Retourne Saturation de l'image
int Gui::getSaturationImage()
{
	return saturationImage;
}
// Retourne Brightness de l'image
int Gui::getBrightnessImage()
{
	return brightnessImage;
}
// Retourne Alpha de l'image
int Gui::getAlphaImage()
{
	return alphaImage;
}


int Gui::getRadius() 
{
	return circleRadius;
}

float Gui::getFov()
{
	return fovSlider;
}

float Gui::getPosXSlider()
{
	return posXSlider;
}

float Gui::getPosYSlider()
{
	return posYSlider;
}

float Gui::getTX1()
{
	return tx1; 
}

float Gui::getTX2()
{
	return tx2;
}

float Gui::getTX3()
{
	return tx3;
}

float Gui::getTY1()
{
	return ty1;
}

float Gui::getTY2()
{
	return ty2;
}

float Gui::getTY3()
{
	return ty3;
}

float Gui::getposXEllipseSlider() {
	return posXEllipseSlider; 
}

float Gui::getposYEllipseSlider()
{
	return posYEllipseSlider;
}

// Destructeur de la classe
Gui::~Gui()
{
}