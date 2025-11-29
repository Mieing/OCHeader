@class AWEAwemeModel, NSString, AFDNewSchoolStoryFeedViewPlayVideoViewController, UIImageView, UIView, UILabel, UIButton;
@protocol AWEAdAutoRenewNoticeBarView, AWEAwemeMusicInfoViewProtocol, AWEFeedBottomTipProtocol, AWEDiscoverDBottomBarViewProtocol, AWEAntiAddictedNoticeBarViewProtocol, AWEAdFeedLearnMoreView;

@interface AFDNewSchoolStoryFeedPlayerInteractionView : UIView <AFDNewSchoolStoryFeedPlayerInteractionViewProtocol>

@property (retain, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long displayType;
@property (copy, nonatomic) NSString *adEventName;
@property (weak, nonatomic) AFDNewSchoolStoryFeedViewPlayVideoViewController *parentController;
@property (retain, nonatomic) UIView<AWEAdAutoRenewNoticeBarView> *riskTipsBarView;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (copy, nonatomic) id /* block */ mixVideoBarWillEnterDetailBlock;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIView<AWEAwemeMusicInfoViewProtocol> *musicInfoView;
@property (retain, nonatomic) UILabel *leftTimeLabel;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) UIView<AWEAdFeedLearnMoreView> *learnMoreView;
@property (retain, nonatomic) UIView<AWEAntiAddictedNoticeBarViewProtocol> *mixVideoInfoBar;
@property (retain, nonatomic) UIView<AWEFeedBottomTipProtocol> *hotSearchTipView;
@property (retain, nonatomic) UIView<AWEDiscoverDBottomBarViewProtocol> *playletBottomBarView;
@property (nonatomic) double interactionViewHeight;
@property (retain, nonatomic) UIButton *textExtractionButton;
@property (copy, nonatomic) id /* block */ extractionInvokeBlock;
@property (nonatomic) double extractionButtonWidth;
@property (retain, nonatomic) UIButton *anchorTipsInfo;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMixVideo:(id)a0;
+ (BOOL)enableMixTypeRelatedVideo:(id)a0;
+ (BOOL)enablePlayletBottomView:(id)a0;
+ (BOOL)enableHotSearchTipView:(id)a0 referString:(id)a1;

- (void)configWithAwemeModel:(id)a0;
- (double)thresholdTime;
- (void)updateLeftTime:(double)a0 totalTime:(double)a1;
- (BOOL)currentPlayerHasSectionInfo;
- (void)textExtractionClick;
- (void)setMusicInfoViewHidden:(BOOL)a0;
- (BOOL)isMixVideInfoBarAndHotSearchTipViewHidden;
- (void)updateHotSearchTipView:(id)a0;
- (void)updatePlayletBottomView:(id)a0;
- (void)hideMusicInfoViewIfNeeded;
- (void)hideLeftTimeLabelIfNeeded;
- (void)updateRiskTipBarViewWithModel:(id)a0;
- (void)updateExtractionButtonWithTitle:(id)a0;
- (void)updateTextExtractionButtonHidden:(BOOL)a0;
- (BOOL)shouldShowMusicAndMarquee;
- (BOOL)shouldShowHotSearchTipView:(id)a0;
- (void)setLeftTimeLabelHidden:(BOOL)a0;
- (void)setViewHiddenWhenVideoAbstractShow;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)layoutSubviews;

@end
