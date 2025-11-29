@interface IESLLUIColor : NSObject

+ (id)colorNamed:(id)a0 inTheme:(id)a1;
+ (id)colorWithARGBString:(id)a0 defaultColor:(id)a1;
+ (id)availableSuits;
+ (id)rawColorResource;
+ (void)registColorIfNeeded;
+ (void)registerColorResourceWithBundlePath:(id)a0;
+ (id)colorNamed:(id)a0;

@end
