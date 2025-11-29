@interface MMFinderLiveGuideAudienceApplyMicLogicPlugin : MMFinderLiveBaseBubbleCardPlugin

- (id)initWithLiveTask:(id)a0;
- (BOOL)checkCanShowBubbleWithTaskId:(id)a0 liveBubbleInfo:(id)a1;
- (long long)supportedBubbleType;
- (id)bubbleIdentifier;
- (void)showBubble;
- (void)dismissBubbleByTimer;
- (void)dismissBubbleByClick;
- (void)dismissBubble:(BOOL)a0;
- (void)localCreateNextLiveNotification;
- (void)localCreate;

@end
