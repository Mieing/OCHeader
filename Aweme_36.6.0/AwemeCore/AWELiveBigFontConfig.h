@interface AWELiveBigFontConfig : NSObject

@property (nonatomic) BOOL enableLiveBigFontAdapt;

+ (double)currentLiveFontScale;
+ (double)calculateLiveBigFontModeLength:(double)a0;
+ (unsigned long long)currentLiveFontMode;
+ (struct CGSize { double x0; double x1; })calculateLiveBigFontModeSize:(struct CGSize { double x0; double x1; })a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)liveBigFontAdaptSwitch;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
