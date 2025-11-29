@class NSString;

@interface BDPNativeAppWarmBootInstance : NSObject <BDPWarmBootInstanceProtocol, BDPInteractionPluginMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)maxCacheCount;
+ (void)bootstrapLaunch;
+ (void)canvasHasAllRemoved:(id)a0;
+ (void)onMaxWarmBootCacheCountChanged:(id)a0;
+ (void)updateMaxWarmBootCacheCount:(int)a0;
+ (void)removeBackgroundCacheWithMaxCount:(int)a0;
+ (BOOL)enableRemoveCacheWithUniqueID:(id)a0;
+ (void)cacheWithUniqueID:(id)a0 type:(long long)a1;
+ (void)removeCacheWithUniqueID:(id)a0;
+ (void)reciveMemoryWarning;
+ (void)initialize;

- (void)dealloc;

@end
