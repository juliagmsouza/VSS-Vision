//
// Created by rodetas on 18/08/18.
//

#ifndef VSS_VISION_ROBOTCOLORPATTERN_H
#define VSS_VISION_ROBOTCOLORPATTERN_H

#include <ColorType.h>
#include <ColorSide.h>
#include <ObjectType.h>

class ColorPattern {
public:

    ObjectType id;
    ColorType doubleColor;
    ColorType singleColor;
    ColorSide colorSide;

    ColorPattern();
    ColorPattern(ObjectType id, ColorType doubleColor, ColorType singleColor, ColorSide colorSide);

    bool isEquals(ColorPattern colorPattern);
};

#endif //VSS_VISION_ROBOTCOLORPATTERN_H