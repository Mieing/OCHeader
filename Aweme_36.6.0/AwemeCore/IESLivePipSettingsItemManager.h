@class NSDictionary, NSString, IESLiveMoreToolsSettingItem;
@protocol IESLiveRoomService, IESLivePipSettingsItemDelegate;

@interface IESLivePipSettingsItemManager : NSObject <IESLiveOnePipSettingsItemProtocol>

@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *pipItem;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *backgroundContinuePlayItem;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLivePipSettingsItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)enableInteractSmallWindow;
- (BOOL)enableShowLotteryItem;
- (BOOL)isBackgroundPlayControlEnable;
- (void)updateBackgroundPlayControlEnableState:(BOOL)a0;
- (BOOL)enableInteract;
- (void)showSettingView;
- (BOOL)isCurrentOuterPipSettingStateOn;
- (void)updateTrackParams:(id)a0 room:(id)a1;
- (BOOL)enableShowOutPip;
- (BOOL)enableAddPiPSettingItem;
- (BOOL)enableShowLivePipCommon;
- (id)generateSmallWindowItem;
- (void)updateOuterPipSettingStateOn:(BOOL)a0;
- (void)addPiPSettingItemInMoreTools;
- (BOOL)isPartialPlayLiveControlEnable;
- (void)updatePartialPlayLiveControlEnableState:(BOOL)a0;
- (void)addPiPPlayingItemInMoreTools;
- (void)updatePipItemEnableWith:(BOOL)a0;
- (void)openPipItemSwitchByAlert;
- (BOOL)enableLiveBizWindowShowOut;
- (BOOL)enableUseOutPipByBiz;
- (BOOL)enableShowWaitingLink;
- (BOOL)enableShowLinkMic;
- (BOOL)enableShowLottery;
- (id)autoPanelSettingControlConfig;
- (id)avPipSystemTestParams;
- (id)liveTabPipBackToSourceSceneConfig;
- (id)liveTabBackToTargetTabIDDict;
- (void)addSmallWindowSettingItem;
- (BOOL)enableUseOutPip;
- (id)generatePipPlayingItem;
- (void)showSmallWindowNotesView;
- (void)updatePipItemSwitchState;
- (BOOL)liveEnableLinkMicApplyFloatWindow;
- (BOOL)liveIpadEnableInnerPip;
- (BOOL)isInAudio;
- (BOOL)p_enableABShowWaitingLink;
- (long long)liveInteractEnableLinkmicSmallWin;
- (void).cxx_destruct;

@end
