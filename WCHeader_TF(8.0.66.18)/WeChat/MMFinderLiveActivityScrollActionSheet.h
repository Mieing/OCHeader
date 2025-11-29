@class MMLiveActionSheetFlowLayoutView, NSString, WCFinderLiveAnchorLogReporter, MMFinderLiveTaskId;

@interface MMFinderLiveActivityScrollActionSheet : MMScrollActionSheet <MMLiveActionSheetFlowLayoutViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (readonly, nonatomic) BOOL isConnectMicEnabled;
@property (readonly, nonatomic) BOOL isCameraClosed;
@property (retain, nonatomic) MMLiveActionSheetFlowLayoutView *anchorOrAssistantFlowLayoutView;
@property (nonatomic) BOOL isLiveBannerMore;
@property (nonatomic) BOOL isInStopState;
@property (retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0 isBannerMore:(BOOL)a1;
- (id)initWithLiveTaskId:(id)a0;
- (void)loadData;
- (id)loadBannerItemArrayForAudience;
- (id)loadItemArrayForAudience;
- (id)loadItemArrayForAnchor;
- (id)loadItemArrayForAssistant;
- (id)getChangeAppSceneItem;
- (BOOL)isCurrentInMainScene;
- (BOOL)isCommentEnable;
- (BOOL)isLikeEnable;
- (BOOL)isRewardEnable;
- (BOOL)isLiveGiftEffectOff;
- (BOOL)isMicMuted;
- (BOOL)isHiddenAudienceNameEnable;
- (BOOL)isHiddenAudienceName;
- (unsigned int)anchorSwitchFlag;
- (BOOL)isRewardAnchorOrAssistantEntrenceEnable;
- (BOOL)isLikeAnchorOrAssistantEntrenceEnable;
- (BOOL)isLiveGameTeamUpSwitchButtonEnable;
- (BOOL)isLiveGameJoinTeamEnabled;
- (BOOL)enableShowFansGroupEntrance;
- (BOOL)enableDataBoardEntrance;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (BOOL)disableScrollSheetItem:(long long)a0;
- (BOOL)handleConnectMic;
- (id)liveTask;
- (void)onActionSheetItemClicked:(id)a0 senderView:(id)a1;
- (void)showInView:(id)a0;
- (void)reportForChangeAppSceneItemExpose;
- (BOOL)isFansGroupItemExpose;
- (void).cxx_destruct;

@end
