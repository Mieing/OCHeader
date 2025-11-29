@class NSString, MMFinderLiveNextLiveNotificationBubbleView;

@interface MMFinderLiveNextLiveNotificationLogicPlugin : MMFinderLiveBaseBubbleCardPlugin <WCFinderLiveExt>

@property (nonatomic) BOOL isCurrentBubbleShow;
@property (retain, nonatomic) MMFinderLiveNextLiveNotificationBubbleView *nextLiveNotiBubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void).cxx_destruct;

@end
