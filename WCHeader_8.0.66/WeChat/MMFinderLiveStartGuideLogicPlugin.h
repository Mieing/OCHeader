@class MMFinderLiveBubbleInfo, UIView;

@interface MMFinderLiveStartGuideLogicPlugin : MMFinderLiveBaseBubbleCardPlugin

@property (retain, nonatomic) MMFinderLiveBubbleInfo *currBubble;
@property (weak, nonatomic) UIView *currBubbleView;
@property (nonatomic) double lastInvokeTime;

+ (void)startLive:(id)a0;
+ (id)getChnlextraDictionaryWithGuideBubble:(id)a0;

- (BOOL)checkCanShowBubbleWithTaskId:(id)a0 liveBubbleInfo:(id)a1;
- (long long)supportedBubbleType;
- (id)bubbleIdentifier;
- (void)showBubble;
- (void)dismissBubbleByTimer;
- (void)dismissBubbleByClick;
- (void)modifyBubbleViewAfterShowed:(id)a0;
- (void)innerDismiss:(BOOL)a0;
- (void)clearDatas;
- (void)startNewLiveAfterCloseCurrLive:(id)a0;
- (BOOL)isCurrentBubbleShow;
- (void)dismissCurrBubble:(BOOL)a0;
- (void)reportOnBubbleShow;
- (void)reportOnBubbleStartLiveAction;
- (void)reportOnBubbleCloseAction;
- (void).cxx_destruct;

@end
