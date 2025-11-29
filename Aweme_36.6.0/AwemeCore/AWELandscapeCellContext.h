@class AWEAwemeModel, NSString, AWEListDataController, AWEUserModel, NSDictionary, AWEDPlayerConfig, AWELandscapeGuideManager, AWEDPlayerInteractionViewConfig, AWELandscapePageContext;
@protocol AWELongVideoDataControllerProtocol;

@interface AWELandscapeCellContext : AWEPageContext <AWELandscapePageContextInteractionProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWELandscapePageContext *pageContext;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly, copy, nonatomic) NSString *referString;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) BOOL enableScroll;
@property (readonly, copy, nonatomic) NSString *fromMixID;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long vcMode;
@property (retain, nonatomic) AWEUserModel *originUserModel;
@property (retain, nonatomic) NSString *interestGroupID;
@property (nonatomic) unsigned long long landscapeEnterFrom;
@property (nonatomic) BOOL isShowingDanmaReport;
@property (nonatomic) double playbackRate;
@property (nonatomic) BOOL isShowingPaymentView;
@property (nonatomic) BOOL isShowingDeviceLimitView;
@property (nonatomic) BOOL isShowingRewardedUnlockedButton;
@property (nonatomic) BOOL needsHidePlayPauseButtonForLongVideo;
@property (nonatomic) BOOL fullScreen;
@property (nonatomic) unsigned long long playResolution;
@property (retain, nonatomic) AWELandscapeGuideManager *guideManager;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (nonatomic) BOOL isInLockStatus;
@property (nonatomic) BOOL isContainerRotating;
@property (nonatomic) BOOL isInLongPress;
@property (retain, nonatomic) AWEListDataController<AWELongVideoDataControllerProtocol> *longVideoDataController;
@property (nonatomic, getter=isShowingLVWidget) BOOL showLVWidget;
@property (copy, nonatomic) NSString *playMode;
@property (weak, nonatomic) AWEDPlayerConfig *config;
@property (weak, nonatomic) AWEDPlayerInteractionViewConfig *viewConfig;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL shouldPreventVideoPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (BOOL)isSlideEnable;
- (BOOL)isFromSearchTranscodePage;
- (id)currentPlayModel;
- (double)safeAreaOffset;
- (id)originFromPage;
- (BOOL)hasNextVideo;
- (id)commonParamsForLandscape:(id)a0;
- (id)paymentSpuID:(id)a0;
- (id)paymentSpuType:(id)a0;
- (id)paymentEpisodeID:(id)a0;
- (id)paymentEpisodeRank:(id)a0;
- (id)paymentTrailStatus:(id)a0;
- (BOOL)isFromLongVideoDetail;
- (BOOL)isFromFeedShare;
- (BOOL)isMixVideoAndSlideEnable;
- (BOOL)isPersonalPageSlideEnable;
- (BOOL)isLongVideoAndSlideEnable;
- (BOOL)isFirstLandscapeVideo:(id)a0;
- (BOOL)needShowMixContinusPlayReminder;
- (BOOL)isUsingNewTransiton;
- (double)splitScreenWidthWithType:(long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
