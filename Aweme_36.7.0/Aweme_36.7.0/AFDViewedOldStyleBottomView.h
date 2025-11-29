@class AWEFeedViewedViewBarController, AWEMultiAvatarView, UIView, NSString, UIImageView, UIButton, MASConstraint, UILabel;
@protocol AWEFeedBottomBarVideoAnalysisEntranceViewV2Protocol, AFDVideoPrivacyButtonControllerProtocol, AFDFeedBottomBarVideoAnalysisEntranceViewProtocol;

@interface AFDViewedOldStyleBottomView : UIView <AFDViewedBottomInnerViewProtocol>

@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) AWEMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MASConstraint *playImageViewRightConstraint;
@property (retain, nonatomic) MASConstraint *multiAvatarViewRightConstraint;
@property (retain, nonatomic) id<AFDVideoPrivacyButtonControllerProtocol> privacyButtonController;
@property (retain, nonatomic) UIView *dataAnalyticsDivider;
@property (retain, nonatomic) UIButton *dataAnalyticsButton;
@property (retain, nonatomic) UIView<AFDFeedBottomBarVideoAnalysisEntranceViewProtocol> *videoAnalysisEntrance;
@property (retain, nonatomic) UIView<AWEFeedBottomBarVideoAnalysisEntranceViewV2Protocol> *feedBottomBarVideoAnalysisEntranceViewV2;
@property (retain, nonatomic) UIButton *shareButton;
@property (weak, nonatomic) AWEFeedViewedViewBarController *barController;
@property (copy, nonatomic) id /* block */ videoAnalysisEntranceViewUpdatedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)userAgreeVideoStoreView;
- (void)updateContentAlpha:(double)a0;
- (void)setupUIOnInit;
- (void)setupPrivacyButton;
- (void)setupVideoAnalysisEntrance;
- (void)setupShareBtn;
- (BOOL)useNewDiagnoseStyle;
- (void)handleViewerListUpdated;
- (void)handleAwemeModelUpdated;
- (void)updateStory25StyleWithAwemeModel:(id)a0;
- (void)updateCommonStyleWithAwemeModel:(id)a0;
- (void)resetPrivacySettingsButton;
- (void)updatePrivacySettingButtonLayoutWithAweme:(id)a0;
- (void)updatePrivacySettingButtonDisallowedPrivacyCellTypesWithAweme:(id)a0;
- (long long)updateViewerOriginCount:(long long)a0;
- (BOOL)canHiddenZeroViewerList;
- (BOOL)hidePlayCountForPreSkiiMomentIfNeeded;
- (void)showViewCountView;
- (void)updateTextLabelAndImageViewWithTitleText:(id)a0 playCount:(id)a1;
- (void)updateVideoAnalysisEntranceLayoutWithPlayCount:(id)a0;
- (void)trackAfterViewerListUpdated;
- (BOOL)shouldUseUV;
- (BOOL)isNewStory;
- (BOOL)isMoment;
- (void)configAvatarAndPlayCountViewWithPlayCount:(id)a0;
- (void)bindBarController;
- (void)updatePrivacyButtonData:(id)a0;
- (id /* block */)tapPlayCountAction;
- (void)dataAnalyticsButtonClicked:(id)a0;
- (void)videoAnalysisEntranceClicked;
- (void)handleShareButtonTap;
- (id)videoAnalysisEntranceView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
