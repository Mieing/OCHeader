@class IESLiveGuideAbilityManager, NSString, NSDictionary, IESLiveGuideVRManager, IESEffectModel, UIView, IESLiveNativeAppBeforeLiveInfo;
@protocol IESLiveAnchorPerfTrackService;

@interface IESLiveAnchorRoomConfigContext : NSObject

@property (retain, nonatomic) IESEffectModel *entryFaceSticker;
@property (nonatomic) BOOL hasPlaybackAuth;
@property (nonatomic) BOOL onlyPlaybackAuth;
@property (nonatomic) BOOL hasRealTimePlayBackAuth;
@property (nonatomic) BOOL hasAudienceRecoredAuth;
@property (nonatomic) BOOL hasShopAndPlayBackAuth;
@property (nonatomic) BOOL hasAskExplainAuth;
@property (nonatomic, getter=isRevertLive) BOOL revertLive;
@property (nonatomic, getter=isRestartLive) BOOL restartLive;
@property (copy, nonatomic) NSString *liveAdditionalPrompt;
@property (copy, nonatomic) NSDictionary *sourceParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL enableShowChatTip;
@property (retain, nonatomic) id audioTheme;
@property (nonatomic) BOOL isNewAnchor;
@property (nonatomic, getter=isFastStartLive) BOOL fastStartLive;
@property (nonatomic) long long interactiveScene;
@property (nonatomic) BOOL autoShowInvitePanel;
@property (copy, nonatomic) NSDictionary *autoShowInvitePanelExtraTrackParams;
@property (retain, nonatomic) id chatroomResumeModel;
@property (nonatomic) BOOL hasWelfareAuth;
@property (copy, nonatomic) NSString *welfareInfoURLString;
@property (retain, nonatomic) IESLiveNativeAppBeforeLiveInfo *nativeAppBeforeLiveInfo;
@property (nonatomic) BOOL isVRLiveMode;
@property (retain, nonatomic) IESLiveGuideVRManager *vrManager;
@property (copy, nonatomic) NSDictionary *bigPartyOpenGuideParams;
@property (retain, nonatomic) id<IESLiveAnchorPerfTrackService> anchorPerfTrack;
@property (copy, nonatomic) NSDictionary *guideBusinessParams;
@property (retain, nonatomic) IESLiveGuideAbilityManager *guideAbilityManager;
@property (weak, nonatomic) UIView *virtualLivePreview;

- (void).cxx_destruct;

@end
