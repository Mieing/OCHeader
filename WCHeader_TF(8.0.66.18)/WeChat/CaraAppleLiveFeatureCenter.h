@class NSString, CaraCppLiveFeatureCenter;

@interface CaraAppleLiveFeatureCenter : NSObject <CaraNativeLiveFeatureCenterBase, ICaraLiveExt>

@property (readonly, nonatomic) CaraCppLiveFeatureCenter *underlying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (int)currentNetworkQuality;
- (void)onLiveReddotExpose:(id)a0;
- (void)onLiveReddotConsume:(id)a0;
- (void)onLiveCellExpose;
- (void)onLiveCellConsume;
- (void)onLiveUserActiveLevelUpdate:(int)a0;
- (void).cxx_destruct;

@end
