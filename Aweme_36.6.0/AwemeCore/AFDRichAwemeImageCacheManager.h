@class NSString, NSMutableDictionary;

@interface AFDRichAwemeImageCacheManager : NSObject <AWECustomWebImageProtocol>

@property (nonatomic) BOOL hadSetUpSemiPermanentDiskCache;
@property (nonatomic) BOOL hadSetUpColdLaunchDiskCache;
@property (retain, nonatomic) NSMutableDictionary *memoryCacheImageKeyDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeMemoryCacheForSearch;
+ (id)getCacheName;
+ (id)getWebImageConfig;
+ (id)getCacheForColdLaunchName;
+ (id)searchImageCacheConfig;
+ (id)config;
+ (id)sharedInstance;
+ (BOOL)enableCache;

- (void)triggerEvent:(id)a0;
- (void)setUpColdLaunchDiskCacheIfNeeded;
- (void).cxx_destruct;

@end
