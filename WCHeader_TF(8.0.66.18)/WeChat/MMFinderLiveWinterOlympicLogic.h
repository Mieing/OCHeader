@class MMFinderLiveActivityTaskId, MMFinderLiveActivityTask;
@protocol MMFinderLiveWinterOlympicLogicDelegate;

@interface MMFinderLiveWinterOlympicLogic : MMFinderLiveLogic

@property (readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
@property (readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
@property (nonatomic) BOOL hasInitTorch;
@property (weak, nonatomic) id<MMFinderLiveWinterOlympicLogicDelegate> liveLogicDelegate;

- (id)initWithTaskId:(id)a0;
- (id)init;
- (void)dealloc;
- (void)loadFont;
- (unsigned long long)torchSourceFromFinderLiveRoomStartScene:(unsigned long long)a0;
- (BOOL)shouldDisplayLawTips;
- (void)fetchRewardGiftList;
- (void)onJoinFinderLiveError:(id)a0 finderDataItem:(id)a1 joinLiveContext:(id)a2 errorPage:(id)a3;
- (void)onGetFinderActivityLiveWinterOlympicsTocherTotalUpdated:(unsigned long long)a0 withTaskId:(id)a1;
- (void)onGetFinderActivityLiveWinterOlympicsStartStatusUpdated:(BOOL)a0 withTaskId:(id)a1;
- (void).cxx_destruct;

@end
