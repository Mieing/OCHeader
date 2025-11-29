@class NSString, NSTimer, NSDictionary, NSMutableArray;

@interface AWEAdChallengeLotteryManager : HTSService <WsDelegate, BDXContainerLifecycleProtocol, AWEAdChallengeLotteryManager>

@property (retain, nonatomic) NSMutableArray *lotteryGuideAnimationShowedSchemas;
@property (retain, nonatomic) NSTimer *searchShowTimer;
@property (retain, nonatomic) NSDictionary *searchTimerUserInfo;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSMutableArray *messageQueue;
@property (nonatomic) BOOL isLotteryAnimationShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillDestory:(id)a0;
- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)onFrontierMessageReceived:(id)a0;
- (void)startWatchECommerceStorePageEvent:(id)a0;
- (void)openTaskDialog:(id)a0;
- (BOOL)canOpenLotteryInSearch:(long long)a0 sceneIDs:(id)a1;
- (BOOL)canOpenLotteryInChallenge:(long long)a0 sceneIDs:(id)a1;
- (BOOL)canOpenLotteryInUserProfie:(long long)a0 sceneIDs:(id)a1;
- (void)tryShowAdLotteryAnimationIfNeed;
- (void)updateSearchFirstFetchEventWithTimerNotification:(id)a0;
- (void)addFrontierNotification;
- (void)tryShowAdLotteryAnimationIfNeedWithPopupSchema:(id)a0;
- (void)updateVideoPlayEventWithChannelType:(long long)a0 itemID:(id)a1 requirements:(id)a2 topicID:(id)a3 authorID:(id)a4 missionID:(id)a5;
- (void)updateChallengeLotteryGuideAnimationShowedSchema:(id)a0;
- (void)fetchChallengeLotteryGuideAnimationShowingStatusWithSchema:(id)a0 completion:(id /* block */)a1;
- (void)trackChallengeFlyBoxButton:(id)a0 challenge:(id)a1 enterFrom:(id)a2;
- (void)tryShowTaskDialogWithTaskID:(id)a0 bizID:(id)a1;
- (void)configSearchShowTimerWithSearchVCInitalInfo:(id)a0 keyword:(id)a1;
- (void)cancelSearchShowTimer;
- (void)tryStartSearchShowTimer;
- (void).cxx_destruct;

@end
