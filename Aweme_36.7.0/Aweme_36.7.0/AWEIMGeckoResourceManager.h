@interface AWEIMGeckoResourceManager : NSObject

+ (id)getThemeImageName:(id)a0;
+ (void)fetchResourcesWhenFirstEnterIM;
+ (id)resoutceDirectoryForChannel:(id)a0;
+ (id)dataForPath:(id)a0 channel:(id)a1;
+ (id)imageWithContentsOfFile:(id)a0 channel:(id)a1;
+ (id)darkOrLightImageForPath:(id)a0 channel:(id)a1;

@end
