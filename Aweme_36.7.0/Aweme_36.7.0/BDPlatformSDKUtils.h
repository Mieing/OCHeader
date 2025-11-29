@interface BDPlatformSDKUtils : NSObject

+ (BOOL)isIPhoneXSeries;
+ (id)colorWithRGB:(int)a0 alpha:(double)a1;
+ (id)currentLanguageBundle;
+ (id)URLWithBaseURLString:(id)a0 byAppendQueryItems:(id)a1 fragment:(id)a2;
+ (BOOL)vcIsBeingPresentedModally:(id)a0;
+ (void)adjustLabelSize:(id)a0;
+ (void)adjustButtonSize:(id)a0;
+ (id)URLWithBaseURLString:(id)a0 byAppendQueryItems:(id)a1;
+ (id)queryDictionaryFromURL:(id)a0;
+ (id)resourceBundle;

@end
