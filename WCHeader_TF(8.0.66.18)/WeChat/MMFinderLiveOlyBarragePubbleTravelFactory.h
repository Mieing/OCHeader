@class NSString, MMFinderLiveActivityTask, MMFinderLiveOlyBarrageTravel, NSMutableArray;

@interface MMFinderLiveOlyBarragePubbleTravelFactory : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) MMFinderLiveActivityTask *currentActivityTask;
@property (retain, nonatomic) NSMutableArray *barragePubbleTravelRouteList;
@property (retain, nonatomic) MMFinderLiveOlyBarrageTravel *barrageTravel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBarragePubbleTravelListForLayoutStyle:(long long)a0;
+ (unsigned long long)getBarragePubbleTravelCountForLayoutStyle:(long long)a0;
+ (id)getBarrageTravel;
+ (id)createBarragePubbleTravelListForLayoutStyleV0;
+ (id)createBarragePubbleTravelListForLayoutStyleV1;
+ (id)createBarragePubbleTravelListForLayoutStyleV2;
+ (double)getTravelAngleForIndex:(int)a0;
+ (id)createBarragePubbleTravelListForLayoutStyleV3;
+ (id)innerGetBarrageTravel;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateResource:(id)a0;
- (void)initDefaultSrc;
- (void)initBarragePubbleTravelRouteList;
- (void)initBarrageTravel;
- (void)updateBarragePubbleRouteConfigResource:(id)a0;
- (void)updateBarrageTravelConfigResource:(id)a0;
- (id)convertToBarragePubbleTravelListFromInitialList:(id)a0;
- (id)convertToBarrageTrailStageListFromInitialList:(id)a0;
- (void).cxx_destruct;

@end
