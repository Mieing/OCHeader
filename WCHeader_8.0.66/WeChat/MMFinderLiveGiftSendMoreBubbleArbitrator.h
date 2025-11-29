@class MMLiveRewardGiftSendingMoreBubbleView, NSString, MMLiveRewardGiftSendingMoreButton, MMFinderLiveGiftGoalView;
@protocol MMLiveRewardGiftSendingMoreLogicDelegate;

@interface MMFinderLiveGiftSendMoreBubbleArbitrator : NSObject <MMLiveRewardGiftSendingMoreLogicDelegate, MMFinderLiveGiftSendMoreBubbleHosting>

@property (retain, nonatomic) MMLiveRewardGiftSendingMoreBubbleView *sendMoreBubbleView;
@property (retain, nonatomic) MMFinderLiveGiftGoalView *giftGoalView;
@property (retain, nonatomic) MMLiveRewardGiftSendingMoreButton *quickSendGiftButton;
@property (weak, nonatomic) id<MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSendMoreBubbleView:(id)a0;
- (void)setEnableSendAgainWithGiftItem:(id)a0 comboId:(id)a1 targetHost:(unsigned long long)a2;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)a0;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)a0;
- (void)setInterruptedFlag:(BOOL)a0 targetHost:(unsigned long long)a1;
- (void)onSendingGiftBatchUpdate:(id)a0 sendingComboId:(id)a1 comboGiftCount:(unsigned long long)a2 fromLongPress:(BOOL)a3 sourceHost:(unsigned long long)a4;
- (void)onLongPressSendingGiftFinished:(id)a0 sendingComboId:(id)a1 comboGiftCount:(unsigned long long)a2 sourceHost:(unsigned long long)a3;
- (void)onSendingGiftBatchFinish:(id)a0 sendingComboId:(id)a1 comboGiftCount:(unsigned long long)a2 sourceHost:(unsigned long long)a3;
- (void)delayCallOnSendingGiftBatchFinish:(id)a0 sendingComboId:(id)a1 comboGiftCount:(unsigned long long)a2 delayInterval:(double)a3 sourceHost:(unsigned long long)a4;
- (void).cxx_destruct;

@end
