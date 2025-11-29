@class NSString;

@interface IESECColorThiefServiceImpl : NSObject <IESECColorThiefService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDominantColorFromImage:(id)a0;
+ (id)getDominantColorLowerFromImage:(id)a0;
+ (id)getDominantColorUpperFromImage:(id)a0;
+ (id)getDominantColorsFromImage:(id)a0 downscaleTo:(double)a1 startY:(double)a2 endY:(double)a3 maxColors:(long long)a4 colorQty:(long long)a5;
+ (id)getDominantColorsFromImage:(id)a0 topLeftPoint:(struct CGPoint { double x0; double x1; })a1 bottomRightPoint:(struct CGPoint { double x0; double x1; })a2 maxColors:(long long)a3 resultQty:(long long)a4 limitedSize:(double)a5;


@end
