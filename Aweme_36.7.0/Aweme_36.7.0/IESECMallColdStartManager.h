@class NSString, IESECMallColdStartPerfModel;

@interface IESECMallColdStartManager : NSObject <IESECMallColdStartManagerProtocol>

@property (retain, nonatomic) IESECMallColdStartPerfModel *imagePerfModel;
@property (retain, nonatomic) IESECMallColdStartPerfModel *animationPerfModel;
@property (retain, nonatomic) IESECMallColdStartPerfModel *templatePerfModel;
@property (nonatomic) unsigned long long currentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)disableColdStart;
+ (BOOL)disableAnimationsPreload;
+ (id)sharedInstance;

- (void)preloadImage:(id)a0;
- (void)requestCommerceColdStartInfo:(id)a0;
- (void)mallDidOpen;
- (void)preLoadImageWithConfig:(id /* block */)a0 logExtra:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)clearCacheData;
- (void)preloadResources:(id)a0 completion:(id /* block */)a1;
- (void)preloadTemplate:(id)a0;
- (void)handlePreloadResourceWithStartTime:(double)a0 result:(id)a1;
- (void)preloadAnimation:(id)a0;
- (void)clearUselessPreloadResource:(id)a0;
- (void)asyncCacheData:(id)a0;
- (void)removeImageFromDisk:(id)a0;
- (id)channelAllowList;
- (void)trackerMallPreloadResourceEventFromPerfModel:(id)a0;
- (void)preloadItemFromConfig:(id)a0 completion:(id /* block */)a1;
- (void)preLoadImageFromConfig:(id)a0 logExtra:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)preLoadImageFromConfigToMemory:(id)a0 logExtra:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)cacheKey;
- (id)init;
- (id)accessKey;

@end
