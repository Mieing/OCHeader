@class NSString, LOTAnimationView, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId;
@protocol MMLiveRewardGiftSendingMoreLogicDelegate;

@interface MMLiveRewardGiftSendingMoreButton : WCLiveBottomTextButton <MMFinderLiveGiftSendMoreBubbleHosting>

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *currentSendMoreGiftItem;
@property (nonatomic) BOOL isEnableSendAgain;
@property (nonatomic) unsigned long long sendingCount;
@property (retain, nonatomic) NSString *currentComboId;
@property (nonatomic) BOOL sendButtonTouchIsNotFinish;
@property (nonatomic) BOOL isInterrupted;
@property (retain, nonatomic) LOTAnimationView *breatheAnimationView;
@property (nonatomic) BOOL shouldUseQuickSendAnimation;
@property (nonatomic) BOOL hasRecognizedAsLongPress;
@property (weak, nonatomic) id<MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate;
@property (copy, nonatomic) id /* block */ sendingMoreButtonEnableCallback;
@property (copy, nonatomic) id /* block */ sendingMoreButtonComboActionBeginCallback;
@property (copy, nonatomic) id /* block */ sendingMoreButtonSendingCountIncreasedCallback;
@property (copy, nonatomic) id /* block */ sendingMoreButtonLongPressingCallback;
@property (nonatomic) BOOL isExposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (id)getFinderLiveTask;
- (void)setupViews;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)sendGiftButtonEnlargeAnimation;
- (void)sendGiftButtonReduceAnimation;
- (void)startGiftButtonBreatheAnimation;
- (void)stopGiftButtonBreatheAnimation:(BOOL)a0;
- (void)setEnableSendAgainWithGiftItem:(id)a0 comboId:(id)a1 targetHost:(unsigned long long)a2;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)a0;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)a0;
- (void)setInterruptedFlag:(BOOL)a0 targetHost:(unsigned long long)a1;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)beginSendButtonLongPressRecognition;
- (void)endSendButtonLongPressRecognition;
- (void)longPressSendingGiftOperation;
- (void).cxx_destruct;

@end
