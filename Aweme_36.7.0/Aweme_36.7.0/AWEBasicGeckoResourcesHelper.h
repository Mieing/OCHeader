@class NSString;

@interface AWEBasicGeckoResourcesHelper : NSObject

@property (copy, nonatomic) NSString *firstSubPath;
@property (copy, nonatomic) NSString *secondSubPath;
@property (copy, nonatomic) NSString *suffix;

+ (id)sharedInstance;

- (void)imageWithName:(id)a0 localName:(id)a1 dynamicTheme:(BOOL)a2 theme:(id)a3 complete:(id /* block */)a4;
- (void)prepareGeckoResourcesWithGeckoChannel:(id)a0;
- (id)imagePathWithGeckoChannel:(id)a0 name:(id)a1 dynamicTheme:(BOOL)a2 theme:(id)a3;
- (id)currentThemeStringWith:(BOOL)a0 theme:(id)a1;
- (BOOL)is2XScreen;
- (id)imageCDNPathWithName:(id)a0;
- (id)cdnHost;
- (void)prepareEcommerceSearchGeckoResources;
- (id)lottiePathWithGeckoChannel:(id)a0 JsonPath:(id)a1;
- (void).cxx_destruct;
- (id)channelId;

@end
