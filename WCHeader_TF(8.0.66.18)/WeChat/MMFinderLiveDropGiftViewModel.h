@class MMTimer, NSString, MMFinderLiveTaskId, MMFinderLiveRewardGiftItem, MMFinderLiveTask, PAGFile;
@protocol MMFinderLiveDropGiftViewModelDelegate;

@interface MMFinderLiveDropGiftViewModel : NSObject <MMFinderLivePayMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic, getter=isViewNeedShow) BOOL viewNeedShow;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (nonatomic) long long currRemainTime;
@property (retain, nonatomic) NSString *packageId;
@property (nonatomic) double currentTimeOnEnterBackground;
@property (retain, nonatomic) NSString *currentComboId;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) PAGFile *pagFile;
@property (weak, nonatomic) id<MMFinderLiveDropGiftViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTaskId:(id)a0;
- (void)registerExt;
- (void)unregisterExt;
- (void)startTimerWithCurrentRemainTime;
- (void)refreshRemainTime;
- (void)refreshRemainTime:(long long)a0;
- (void)showGiftViewAfter:(double)a0;
- (void)updateAnchorGiftView:(BOOL)a0;
- (void)onGetFinderLiveDropGift:(id)a0 giftInfo:(id)a1;
- (void)onGetFinderLiveDropGiftForAnchor:(id)a0;
- (void)onApplicationWillEnterForeground:(id)a0;
- (void)onApplicationDidEnterBackground:(id)a0;
- (void)sendGetDropGift;
- (void)handleGetDropGiftDetailForAnchor;
- (void)handleGetDropGiftDetailForAudience;
- (void)sendDeliveryGift:(id)a0;
- (void)sendError:(id)a0;
- (void)onDeliveryGiftWithError:(id)a0 taskId:(id)a1;
- (void).cxx_destruct;

@end
