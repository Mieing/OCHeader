@class NSDictionary, NSString, YYMemoryCache;

@interface AWEIMConversationLocalImageCache : NSObject <AWEIMConLocalImageService>

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) YYMemoryCache *cache;
@property (copy, nonatomic) NSDictionary *ABConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)p_generateMainCache;
- (id)readCacheWithImageName:(id)a0 bundleName:(id)a1;
- (BOOL)writeCache:(id)a0 imageName:(id)a1 bundleName:(id)a2;
- (id)p_keyForImageName:(id)a0 bundleName:(id)a1;
- (void)p_trackWay:(id)a0 withImageName:(id)a1 bundleName:(id)a2 resultImage:(id)a3 extra:(id)a4;
- (BOOL)p_shouldCacheImage:(id)a0;
- (unsigned long long)p_memoryCostOfUIImage:(id)a0;
- (BOOL)p_shouldTrack;
- (void)conWillAppear;
- (void)conWillDisappear;
- (void)conWillDealloc;
- (void).cxx_destruct;
- (id)init;

@end
