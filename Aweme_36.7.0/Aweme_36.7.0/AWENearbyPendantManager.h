@class AWERxProperty, AWEStorage;

@interface AWENearbyPendantManager : NSObject

@property (nonatomic) double pendantServiceTimeInterval;
@property (nonatomic) double localMachineTimeInterval;
@property (retain, nonatomic) AWEStorage *cacheStorage;
@property (nonatomic) BOOL isHometownMode;
@property (nonatomic) BOOL isHometownLocalMode;
@property (nonatomic) BOOL isRedPacketPendant;
@property (retain, nonatomic) AWERxProperty *pendant;

- (void)downloadLottieWithURL:(id)a0 completion:(id /* block */)a1;
- (id)getLottieWithURL:(id)a0;
- (id)__pendantClosedTimeCacheKeyWithPendantModel:(id)a0;
- (id)__findLottieJSONPath:(id)a0;
- (void)handleNearbyPendantModel:(id)a0 serverTimeStamp:(double)a1;
- (void)closePendantModel:(id)a0;
- (void)downloadPendantResourceWithPendantModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)needShowPendantModel:(id)a0;
- (id)getLottieFilePathWithPendantModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
