@class MMFinderLiveBubbleInfo;

@interface MMFinderLiveBaseBubbleCardPlugin : MMLiveTaskBaseFunctionPlugin

@property (retain, nonatomic) MMFinderLiveBubbleInfo *liveBubbleInfo;

- (id)initWithLiveTask:(id)a0;
- (void)onBubbleClicked;
- (void)onGetFinderLiveMessage:(id)a0 taskId:(id)a1 onlineContacts:(id)a2 msgList:(id)a3 finderLiveInfo:(id)a4 onlineCount:(unsigned int)a5 liveInfoEnable:(BOOL)a6 liveClosed:(BOOL)a7 liveExtFlag:(unsigned int)a8 onlineViewCount:(unsigned int)a9 ktvPlayerCount:(unsigned int)a10 nextRequestInterval:(unsigned int)a11 currentLikeCount:(unsigned long long)a12 extraClientConfigUpdated:(BOOL)a13 liveGameData:(id)a14 respContext:(id)a15;
- (void)registerExtensions;
- (BOOL)checkCanShowBubbleWithTaskId:(id)a0 liveBubbleInfo:(id)a1;
- (void)cancelLastAutoDismissTimer;
- (void)delayDismissBubbleByTimerAfterInterval:(double)a0;
- (void)delayDismissBubbleByClickAfterInterval:(double)a0;
- (void)innerShowWithBubbleInfo:(id)a0;
- (id)finderLiveTask;
- (long long)supportedBubbleType;
- (id)bubbleIdentifier;
- (void)showBubble;
- (void)dismissBubbleByTimer;
- (void)dismissBubbleByClick;
- (void).cxx_destruct;

@end
