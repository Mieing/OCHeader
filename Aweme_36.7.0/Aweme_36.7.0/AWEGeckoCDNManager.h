@class NSString, AWEGeckoCDNConfig;

@interface AWEGeckoCDNManager : NSObject

@property (retain, nonatomic) AWEGeckoCDNConfig *config;
@property (copy, nonatomic) NSString *resourcePrefix;
@property (nonatomic) BOOL geckoImageUsingPreferredTheme;

+ (id)getCDNDomain;

- (void)themeDidChangeNoti:(id)a0;
- (void)memoryWarningNoti:(id)a0;
- (id)getImageWithName:(id)a0 forTheme:(long long)a1 block:(id /* block */)a2;
- (id)p_getImageWithNameOPT:(id)a0 forTheme:(long long)a1 block:(id /* block */)a2;
- (id)p_getImageWithName:(id)a0 forTheme:(long long)a1 block:(id /* block */)a2;
- (id)getImageWithName:(id)a0 block:(id /* block */)a1;
- (id)p_getImageWithNameOPT:(id)a0 forTheme:(long long)a1;
- (id)p_getBundleImageWithName:(id)a0;
- (id)p_getGeckoImageWithImageName:(id)a0 forTheme:(long long)a1;
- (id)p_getBDImageCacheWithImageName:(id)a0 forTheme:(long long)a1;
- (id)getResourceCDNUrlWithName:(id)a0;
- (void)downloadFinshForSkinWithImage:(id)a0 imageName:(id)a1 imageFileName:(id)a2 urlStr:(id)a3 image:(id)a4 error1:(id)a5 error2:(id)a6 themeStyle:(long long)a7;
- (void)imageDownloadWithURL:(id)a0 complete:(id /* block */)a1;
- (id)getImageFromGeckoWithName:(id)a0 forTheme:(long long)a1;
- (id)getImageWithName:(id)a0 forTheme:(long long)a1;
- (id)getImageWithName:(id)a0;
- (id)convertFileNameFromImageName:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
