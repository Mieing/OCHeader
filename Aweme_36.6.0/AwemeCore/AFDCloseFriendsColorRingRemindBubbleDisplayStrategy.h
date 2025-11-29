@class NSString, NSMutableDictionary, AFDFrequencyCountRule;
@protocol AFDCloseFriendsColorRingBubbleManagerDelegate;

@interface AFDCloseFriendsColorRingRemindBubbleDisplayStrategy : NSObject <AFDCloseFriendsColorRingBubbleDisplayStrategyProtocol, AFDSkylightMomentMessage>

@property (nonatomic) long long potentialMaxBubbleCount;
@property (retain, nonatomic) AFDFrequencyCountRule *showIntervalRule;
@property (retain, nonatomic) AFDFrequencyCountRule *limitShowRule;
@property (retain, nonatomic) NSMutableDictionary *timeMap;
@property (nonatomic) BOOL isSkylightViewAppeared;
@property (weak, nonatomic) id<AFDCloseFriendsColorRingBubbleManagerDelegate> managerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogin;
- (void)skylightViewDidAppear;
- (BOOL)isFirstShowBubbleWithMomentColorRingInfo:(id)a0;
- (void)trackFirstShowWithMomentColorRingInfo:(id)a0;
- (unsigned long long)bubbleTypeOfTheStrategy;
- (BOOL)isBubbleTypeOfAweme;
- (BOOL)canShowBubbleWithMomentColorRingInfo:(id)a0;
- (void)onBubbleViewTappedWithMomentColorRingInfo:(id)a0;
- (void)willShowBubbleWithMomentColorRingInfo:(id)a0 isFirstBlock:(id /* block */)a1;
- (void)skylightViewDidDisappear;
- (BOOL)isShowingAnyBubble;
- (void)didClickOthersColorRingWithUid:(id)a0;
- (void)remindBubbleTimerFiredWithUid:(id)a0;
- (long long)getMaxBubbleCount;
- (void)didClickRemindBubbleWithUid:(id)a0;
- (void)doTheStrategy;
- (unsigned long long)getEnterMomentScene;
- (long long)showIntervalRulePeriod;
- (long long)limitShowRulePeriod;
- (double)getAutoDismissTimeWithUid:(id)a0;
- (void)updateTimeIntervalWithUid:(id)a0 beginTime:(double)a1 endTime:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
