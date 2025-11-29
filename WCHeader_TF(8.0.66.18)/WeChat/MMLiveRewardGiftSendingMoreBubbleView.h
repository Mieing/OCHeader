@class NSString, MMFinderLiveRewardGiftItem, UILongPressGestureRecognizer, MMUIView, MMFinderLiveTaskId, LOTAnimationView, MMUILabel, MMUIButton;
@protocol MMLiveRewardGiftSendingMoreLogicDelegate;

@interface MMLiveRewardGiftSendingMoreBubbleView : MMUIView <MMFinderLiveGiftSendMoreBubbleHosting>

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *currentSendMoreGiftItem;
@property (nonatomic) BOOL isEnableSendAgain;
@property (nonatomic) unsigned long long sendingCount;
@property (retain, nonatomic) NSString *currentComboId;
@property (nonatomic) BOOL sendButtonTouchIsNotFinish;
@property (nonatomic) BOOL sendButtonLongPressIsOver;
@property (nonatomic) BOOL isInterrupted;
@property (nonatomic) BOOL shouldUseQuickSendAnimation;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) LOTAnimationView *breatheAnimationView;
@property (retain, nonatomic) LOTAnimationView *shockAnimationView;
@property (retain, nonatomic) MMUIButton *sendButton;
@property (retain, nonatomic) MMUILabel *sendingCountLabel;
@property (retain, nonatomic) UILongPressGestureRecognizer *sendButtonLongPressGesture;
@property (weak, nonatomic) id<MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate;
@property (copy, nonatomic) id /* block */ sendingMoreBubbleEnableCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (id)getFinderLiveTask;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)countLabelDanceAnimation:(double)a0;
- (void)setEnableSendAgainWithGiftItem:(id)a0 comboId:(id)a1 targetHost:(unsigned long long)a2;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)a0;
- (void)setInterruptedFlag:(BOOL)a0 targetHost:(unsigned long long)a1;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)a0;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)beginSendButtonLongPressRecognition;
- (void)endSendButtonLongPressRecognition;
- (void)longPressSendingGiftOperation;
- (void)onLongpressSendButton:(id)a0;
- (void)startBubbleBreatheAnimation;
- (void)stopBubbleBreatheAnimation;
- (void)startBubbleShockAnimation;
- (void)stopBubbleShockAnimation;
- (void).cxx_destruct;

@end
