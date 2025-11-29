@class NSString;
@protocol AFDCloseFriendsColorRingBubbleManagerDelegate;

@interface AFDCloseFriendsColorRingPublishBubbleDisplayStrategy : NSObject <AFDCloseFriendsColorRingBubbleDisplayStrategyProtocol>

@property (nonatomic) BOOL isReported;
@property (weak, nonatomic) id<AFDCloseFriendsColorRingBubbleManagerDelegate> managerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogin;
- (BOOL)isFirstShowBubbleWithMomentColorRingInfo:(id)a0;
- (unsigned long long)bubbleTypeOfTheStrategy;
- (BOOL)isBubbleTypeOfAweme;
- (BOOL)canShowBubbleWithMomentColorRingInfo:(id)a0;
- (void)onBubbleViewTappedWithMomentColorRingInfo:(id)a0;
- (void)willShowBubbleWithMomentColorRingInfo:(id)a0 isFirstBlock:(id /* block */)a1;
- (void)didClickPublishBubble;
- (void).cxx_destruct;

@end
