@class NSMutableDictionary;

@interface AWEPOILynxTemplateDecodeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedBundles;

+ (id)sharedInstance;

- (id)cacheKeyForURL:(id)a0;
- (void)setTemplateBundle:(id)a0 forURL:(id)a1;
- (id)templateBundleForURL:(id)a0 isPreload:(BOOL)a1 bizCode:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
