@interface DUXBigFontAdaptUtil : NSObject

+ (id)adaptiveGeneralFontOfClass:(long long)a0 weight:(long long)a1 maxScale:(double)a2;
+ (BOOL)isFontModeLimitMiddleOn;
+ (double)maxScaleForEnlargeType:(unsigned long long)a0;
+ (id)adaptiveGeneralFontDefaultLargeOfClass:(long long)a0 weight:(long long)a1 maxScale:(double)a2;
+ (unsigned long long)enlargeType:(unsigned long long)a0 forComponentName:(id)a1;
+ (BOOL)isComponentEnlargeOptOn:(id)a0;
+ (unsigned long long)enlargeModeWithEnlargeType:(unsigned long long)a0;
+ (BOOL)isBigFontOn:(unsigned long long)a0;
+ (id)lowerCaseSetWithArray:(id)a0;
+ (void)setupAdaptBigFontConfigIfNeeded;
+ (BOOL)isClass:(id)a0 inSet:(id)a1;
+ (BOOL)isBigFontScaleOn:(double)a0;
+ (id)adaptiveGeneralFontOfClass:(long long)a0 weight:(long long)a1 maxScale:(double)a2 defaultFont:(id)a3;
+ (unsigned long long)enlargeModeWithEnlargeTypeDefaultLarge:(unsigned long long)a0;
+ (unsigned long long)bigFontScaleType;
+ (long long)smallScreenSize;
+ (BOOL)isFontModeLimitLargeOn;
+ (double)scaleAtIndex:(long long)a0 defaultScale:(double)a1;
+ (BOOL)isDynamicFontScaleOn;
+ (id)scaleList;
+ (void)setupsComponentEnlargeOptSetIfNeeded;
+ (unsigned long long)enlargeModeWithMiddle;
+ (unsigned long long)enlargeModeWithLarge;
+ (unsigned long long)enlargeModeWithNomal;
+ (id)adaptiveGeneralFontOfSize:(double)a0 weight:(long long)a1 maxScale:(double)a2;
+ (BOOL)isGlobalSwitchAllOn;
+ (void)switchGlobalBigFontOn:(id)a0;
+ (unsigned long long)limitFontModeWithMode:(unsigned long long)a0;
+ (double)limitFontScaleWithMode:(unsigned long long)a0;

@end
