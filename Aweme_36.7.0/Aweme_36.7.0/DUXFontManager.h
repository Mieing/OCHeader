@interface DUXFontManager : NSObject

@property (nonatomic) unsigned long long fontMode;
@property (nonatomic) BOOL elderModeOn;
@property (copy, nonatomic) id /* block */ duxOnlineFontsBlock;

+ (BOOL)bigFontModeOn;
+ (double)scaleForCurve:(unsigned long long)a0;
+ (id)currentModeAttribute;
+ (double)scaleFotMode:(unsigned long long)a0 curve:(unsigned long long)a1;
+ (unsigned long long)currentFontMode;
+ (BOOL)elderModeOn;
+ (BOOL)switchToElderMode:(BOOL)a0;
+ (BOOL)switchToFontMode:(id)a0;
+ (id)getReflectFontModeWithSystemFont;
+ (void)setupOnlineFontsBlock:(id /* block */)a0;
+ (BOOL)isFontModeLimitMiddleOn;
+ (unsigned long long)transferFontMode:(id)a0;
+ (id /* block */)functionForCurve:(unsigned long long)a0;
+ (double)dynamicAxisXForMode:(unsigned long long)a0;
+ (double)axisXForMode:(unsigned long long)a0;
+ (id)transferFontModeAttribute:(unsigned long long)a0;
+ (double)scaleForMode:(unsigned long long)a0;
+ (id)getOnlineFontDataWithName:(id)a0;
+ (id)sharedManager;
+ (double)currentScale;

- (void).cxx_destruct;
- (id)init;
- (double)currentScale;

@end
