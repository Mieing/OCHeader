@class NSString;

@interface AFDGeckoResourcesManager : NSObject <AFDGeckoResourcesManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataForPath:(id)a0 channel:(id)a1;
+ (void)friends_setImageForImageView:(id)a0 imageName:(id)a1 dynamicTheme:(BOOL)a2 themeColor:(id)a3;
+ (id)friends_imageNamed:(id)a0 dynamicTheme:(BOOL)a1;
+ (id)aAFDGeckoImageView;
+ (id)friends_imageNamed:(id)a0 dynamicTheme:(BOOL)a1 themeColor:(id)a2;
+ (id)imageNamed:(id)a0 channel:(id)a1 inSearchBundleName:(id)a2 dynamicTheme:(BOOL)a3 themeColor:(id)a4;
+ (id)imageNamed:(id)a0 channel:(id)a1 inSearchBundleName:(id)a2 dynamicTheme:(BOOL)a3;
+ (id)p_themeImageNamed:(id)a0 channel:(id)a1 inSearchBundleName:(id)a2;
+ (id)p_imageNamed:(id)a0 channel:(id)a1 inSearchBundleName:(id)a2;
+ (void)trackImageInitWithStatus:(long long)a0 name:(id)a1 channel:(id)a2 inSearchBundleName:(id)a3 extra:(id)a4;
+ (id)p_imageNamed:(id)a0 channel:(id)a1;
+ (id)p_CDNImageWithImageName:(id)a0 channel:(id)a1 inSearchBundleName:(id)a2 dynamicTheme:(BOOL)a3;
+ (id)p_themeImageNamed:(id)a0 channel:(id)a1 preferredTheme:(long long)a2;
+ (id)p_cacheNameWithImageName:(id)a0 channel:(id)a1 dynamicTheme:(BOOL)a2 preferredTheme:(long long)a3;
+ (id)resourceDirectoryForChannel:(id)a0;
+ (id)p_themeImagePathWithName:(id)a0 preferredTheme:(long long)a1;
+ (id)p_getThemeImageName:(id)a0;
+ (void)tryUpdateGeckoResourcesWithChannel:(id)a0;
+ (id)p_CDNImageURLWithImageName:(id)a0 channel:(id)a1 dynamicTheme:(BOOL)a2 preferredTheme:(long long)a3;
+ (void)p_requestImage:(id)a0 name:(id)a1 channel:(id)a2 inSearchBundleName:(id)a3 dynamicTheme:(BOOL)a4 preferredTheme:(long long)a5 updatableImage:(id)a6 complete:(id /* block */)a7;
+ (void)p_cacheCDNImage:(id)a0 imageName:(id)a1 channel:(id)a2 dynamicTheme:(BOOL)a3 preferredTheme:(long long)a4;
+ (id)p_localImageNamed:(id)a0 channel:(id)a1 inSearchBundleName:(id)a2 dynamicTheme:(BOOL)a3 preferredTheme:(long long)a4 extra:(id)a5;
+ (id)CNDHost;
+ (id)customCDNPrefix;
+ (Class)aAFDServiceDOUYINLiteAdaperClass;
+ (Class)aAWESettingsViewModelDOUYINHMAdapterClass;
+ (void)fetchGeckoResourcesWithChannel:(id)a0;
+ (void)setImageForImageView:(id)a0 imageName:(id)a1 channel:(id)a2 inSearchBundleName:(id)a3 dynamicTheme:(BOOL)a4 themeColor:(id)a5;
+ (void)asyncGetDataForPath:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
+ (Class)AFDGeckoImageViewClass;
+ (id)aAFDGeckoButton;

- (id)aAFDServiceDOUYINLiteAdaper;
- (id)aAWESettingsViewModelDOUYINHMAdapter;

@end
