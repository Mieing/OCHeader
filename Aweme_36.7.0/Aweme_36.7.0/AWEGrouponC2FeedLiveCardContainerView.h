@class AWEAwemeModel, UIView, NSString, AWEGrouponC2FeedAnchorView, UIImageView, AWEGradientView, BDImageView, AWEGrouponFeedLiveExperimentView, AWEGouponC2FeedDualAnchorContainerView, UILabel, AWEGrouponC2FeedLiveLargeCardProductView;

@interface AWEGrouponC2FeedLiveCardContainerView : UIView <AWEGrouponC2FeedLiveCardContainerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL useNewLiveCardStyle;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *liveContentView;
@property (retain, nonatomic) UIView *liveInfoView;
@property (retain, nonatomic) BDImageView *liveIconImageView;
@property (retain, nonatomic) AWEGradientView *liveIconBgGradientView;
@property (retain, nonatomic) UILabel *liveTextLabel;
@property (retain, nonatomic) UIView *videoTagView;
@property (retain, nonatomic) UILabel *videoTagLabel;
@property (retain, nonatomic) AWEGrouponC2FeedAnchorView *anchorView;
@property (retain, nonatomic) AWEGouponC2FeedDualAnchorContainerView *anchorV2View;
@property (retain, nonatomic) AWEGradientView *anchorGradientView;
@property (retain, nonatomic) UIView *liveContentInfoView;
@property (retain, nonatomic) UIImageView *liveContentInfoIcon;
@property (retain, nonatomic) UILabel *liveContentInfoTagLabel;
@property (retain, nonatomic) UIView *liveContentInfoSplitLine;
@property (retain, nonatomic) UIImageView *spLineImg;
@property (retain, nonatomic) UILabel *liveContentInfoText;
@property (retain, nonatomic) UIImageView *userIconImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UIImageView *hotIconImageView;
@property (retain, nonatomic) UILabel *hotCountLabel;
@property (retain, nonatomic) UIView *hotInfoView;
@property (retain, nonatomic) AWEGrouponFeedLiveExperimentView *experimentView;
@property (retain, nonatomic) AWEGrouponC2FeedLiveLargeCardProductView *productCardView;
@property (retain, nonatomic) UILabel *liveTitle;
@property (retain, nonatomic) AWEGradientView *largeCardBottomGradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)coverImageResizeRatio;
+ (double)cardHighWithWidth:(double)a0 model:(id)a1;
+ (BOOL)canShowLiveTitle:(id)a0;
+ (BOOL)canShowLiveContentInfo:(id)a0;
+ (double)cardPadding;

- (void)shouldHiddenAdLabel:(BOOL)a0;
- (id)infoNumberWithCount:(long long)a0;
- (void)setupLargeCardUI;
- (void)setupLargeCardLayout;
- (BOOL)shouldShowExperimentView;
- (BOOL)shouldShowAdLabel;
- (void)updateLargeCardWithModel:(id)a0;
- (void)updateNormalCardWithModel:(id)a0;
- (void)setUpVCWithModel:(id)a0;
- (void)updateContainerViewInfoWithModel:(id)a0;
- (void)updateLiveContentView:(id)a0;
- (void)didPreviewStreamStartPlay;
- (void)didRemoveLiveContentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverFrame;
- (BOOL)shouldShowAnchorView;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;

@end
