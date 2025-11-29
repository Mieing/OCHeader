@interface AWENearbyGrouponLargeModeManager : NSObject

+ (BOOL)showLargeMode;
+ (struct CGSize { double x0; double x1; })largeModeSizeWithFrame:(struct CGSize { double x0; double x1; })a0 isLargeMode:(BOOL)a1;
+ (id)updateLargeModeAttributesWithModel:(id)a0 isLargeMode:(BOOL)a1;
+ (double)largeModeSizeWithFont:(double)a0 isLargeMode:(BOOL)a1;
+ (BOOL)isCollectListLargeMode;
+ (double)currentScaleForBigFontAdapt:(BOOL)a0;

@end
