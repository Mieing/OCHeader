@class IESLiveGCDTimer, NSString, IESLiveMoreToolsSettingItem;
@protocol IESLiveInteractSmallWindowDelegate;

@interface IESLiveInteractSmallWindowComponent : IESLiveInteractComponentBase <IESLiveInteractSmallWindowRouter, IESLiveBigPartyActions, IESLiveMultiAudioAction, IESLiveKTVActions, IESLiveInteractionPlaymodeActions, HTSLiveMessageSubscriber>

@property (nonatomic) BOOL autoOpenSmallWindow;
@property (nonatomic) BOOL smallWindowExistBeforeEnter;
@property (nonatomic) BOOL isClosing;
@property (nonatomic) BOOL hasLoadParam;
@property (nonatomic) BOOL hasApplyOnce;
@property (nonatomic) BOOL isCurrentWaitingLink;
@property (nonatomic) BOOL isCurrentLinkMic;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *smallWindowItem;
@property (retain, nonatomic) IESLiveGCDTimer *limitTimer;
@property (nonatomic) BOOL isSelfSing;
@property (nonatomic) long long closeSmallWinTimes;
@property (readonly, nonatomic) long long currentWindowType;
@property (readonly, nonatomic) BOOL hasSwitchAudioAudioScenarioToCommunication;
@property (weak, nonatomic) id<IESLiveInteractSmallWindowDelegate> currentWindowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (BOOL)canOpenWaitingLinkSmallWindow;
- (BOOL)canOpenLinkMicSmallWindow;
- (BOOL)abEnableWaitingLinkSmallWindow;
- (BOOL)abEnableLinkMicSmallWindow;
- (BOOL)autoOpenInteractSmallWindow;
- (BOOL)isLinkMicSmallWindowShowing;
- (BOOL)isWaitingSmallWindowShowing;
- (long long)permitReceiveEnterRoomTime;
- (id)allMemberList;
- (id)paidLinkProgress;
- (void)updateLimitProgress:(id)a0 WithUser:(id)a1;
- (id)smallWindowRoomId;
- (void)currentWindowTypeSwitchTo:(long long)a0 isReturnRoom:(BOOL)a1;
- (BOOL)liveInteractSmallWinCloseButtonAbTest;
- (void)showToastWhenCloseSmallWinIfNeeded;
- (BOOL)smallWindowExistBeforeEnterRoom;
- (void)showSettingView;
- (void)addMoreToolsSettingItem;
- (void)upDateMessageReciver;
- (void)bigPartyAllMembersListDidChange:(id)a0;
- (void)addSmallWindowSettingItem;
- (void)multiAudioAllMembersListDidChange:(id)a0;
- (void)interactionPlaymodeDidStart:(int)a0;
- (void)interactionPlaymodeDidEnd:(int)a0;
- (void)componentBindContext;
- (void)willStartPlayMusicWithMusicID:(id)a0 afterTime:(long long)a1;
- (void)didStopPlayMusicWithMusicID:(id)a0 finished:(BOOL)a1;
- (double)linkmicProgress:(id)a0;
- (long long)p_expectedLeaveTime:(id)a0;
- (void)removeMoreToolsSettingItem;
- (void)onReceiveOrderSingMessage:(id)a0;
- (BOOL)isPerForming;
- (void)setCurrentWindowType:(long long)a0;
- (long long)maxAlertTime;
- (void)addPiPItemInMoreTools;
- (void)leaveRoom;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (BOOL)isAudio;
- (id)linkStatus;

@end
