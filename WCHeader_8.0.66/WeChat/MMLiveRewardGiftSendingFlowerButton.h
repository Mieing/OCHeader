@class NSString, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId;
@protocol MMLiveRewardGiftSendingMoreLogicDelegate;

@interface MMLiveRewardGiftSendingFlowerButton : MMUIButton <MMFinderLiveGiftSendMoreBubbleHosting>

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *currentSendMoreGiftItem;
@property (nonatomic) BOOL isEnableSendAgain;
@property (nonatomic) unsigned long long sendingCount;
@property (retain, nonatomic) NSString *currentComboId;
@property (nonatomic) BOOL sendButtonTouchIsNotFinish;
@property (nonatomic) BOOL isInterrupted;
@property (nonatomic) BOOL shouldUseQuickSendAnimation;
@property (nonatomic) BOOL hasRecognizedAsLongPress;
@property (weak, nonatomic) id<MMLiveRewardGiftSendingMoreLogicDelegate> logicDelegate;
@property (copy, nonatomic) id /* block */ sendingFlowerButtonEnableCallback;
@property (copy, nonatomic) id /* block */ sendingFlowerButtonComboActionBeginCallback;
@property (copy, nonatomic) id /* block */ sendingFlowerButtonSendingCountIncreasedCallback;
@property (copy, nonatomic) id /* block */ sendingFlowerButtonLongPressingCallback;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL isExposed;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconLeftPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (id)getFinderLiveTask;
- (void)setupViews;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnableSendAgainWithGiftItem:(id)a0 comboId:(id)a1 targetHost:(unsigned long long)a2;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)a0;
- (void)setInterruptedFlag:(BOOL)a0 targetHost:(unsigned long long)a1;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)a0;
- (void)sendGiftButtonEnlargeAnimation;
- (void)sendGiftButtonReduceAnimation;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)beginSendButtonLongPressRecognition;
- (void)endSendButtonLongPressRecognition;
- (void)longPressSendingGiftOperation;
- (void).cxx_destruct;

@end
