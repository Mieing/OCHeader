@class NSMutableDictionary, NSString, AWEGrouponLifeFeedsScrollGuideConfig, NSMutableSet;

@interface AWEGrouponUncertainTaskHandler : NSObject <AWEGrouponLifeFeedsScrollGuideTaskProtocol>

@property (retain, nonatomic) AWEGrouponLifeFeedsScrollGuideConfig *taskConfig;
@property (nonatomic) double taskStartTime;
@property (nonatomic) double totalScrollTime;
@property (nonatomic) long long clickCount;
@property (nonatomic) double lastTriggerScrollTime;
@property (nonatomic) long long lastTriggerClickCount;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSMutableSet *countedItems;
@property (retain, nonatomic) NSMutableDictionary *clickedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleScrollWithDuration:(double)a0;
- (void)handleClickWithItemTag:(id)a0;
- (void)handleClickReturnWithItemTag:(id)a0;
- (void)checkClickTrigger;
- (void)checkScrollTrigger;
- (void)tryRequestForCoupon:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)trackLifeFeedTriggerLotteryResultWithSliceTime:(double)a0 clickCnt:(long long)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
