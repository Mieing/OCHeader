@interface BDPFontScaleHelper : NSObject

@property (nonatomic) unsigned long long currentMode;

+ (unsigned long long)currentFontMode;
+ (id)scaleFontWithName:(id)a0 normalSize:(double)a1 middleSize:(double)a2 largeSize:(double)a3;
+ (double)scaleLengthWithNormalLength:(double)a0 middleLength:(double)a1 largeLength:(double)a2;
+ (double)scaleLengthWithLength:(double)a0;
+ (id)scaleFontWithName:(id)a0 size:(double)a1;
+ (double)scaleForFontMode:(unsigned long long)a0;
+ (id)sharedInstance;

@end
