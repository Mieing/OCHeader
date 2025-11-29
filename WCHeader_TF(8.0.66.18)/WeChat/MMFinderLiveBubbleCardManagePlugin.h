@class UIView;

@interface MMFinderLiveBubbleCardManagePlugin : MMLiveTaskBaseFunctionPlugin

@property (nonatomic) long long currBubbleCardType;
@property (weak, nonatomic) UIView *currBubbleCardView;

- (id)initWithLiveTask:(id)a0;
- (void)registerExtensions;
- (void)onGetFinderLiveMessage:(id)a0 taskId:(id)a1 onlineContacts:(id)a2 msgList:(id)a3 finderLiveInfo:(id)a4 onlineCount:(unsigned int)a5 liveInfoEnable:(BOOL)a6 liveClosed:(BOOL)a7 liveExtFlag:(unsigned int)a8 onlineViewCount:(unsigned int)a9 ktvPlayerCount:(unsigned int)a10 nextRequestInterval:(unsigned int)a11 currentLikeCount:(unsigned long long)a12 extraClientConfigUpdated:(BOOL)a13 liveGameData:(id)a14 respContext:(id)a15;
- (void)dismissLastBubbleCardIfNeed;
- (void)updateCurrBubbleCardType:(long long)a0;
- (void)updateCurrBubbleCardView:(id)a0;
- (void)onBubbleCardDisplay:(long long)a0 bubble:(id)a1;
- (void)onBubbleCardDismiss:(long long)a0;
- (void).cxx_destruct;

@end
