@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWENearbyCardLynxTemplateDecodeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedBundlesMap;
@property (nonatomic) BOOL hasAlreadyPreDecode;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)cacheKeyForURL:(id)a0;
- (void)preDecodeTemplateWithUrlList:(id)a0;
- (id)templateBundleForURL:(id)a0;
- (void)preDecodeTemplateForURL:(id)a0;
- (void)setTemplateBundle:(id)a0 forURL:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
