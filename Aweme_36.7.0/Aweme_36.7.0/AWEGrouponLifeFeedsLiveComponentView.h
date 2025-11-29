@class UIView, NSString, AWENearbyPaddingLabel, AWEGrouponLifeFeedsSaleInfoView, AWEGrouponLifeFeedsRecommendReasonView, UIImageView, AWEGradientView, AWEGrouponLifeFeedsUserInfoView, NSMutableAttributedString, UILabel, AWEGouponC2FeedDualAnchorView;
@protocol AWELivePreviewStreamViewProtocol;

@interface AWEGrouponLifeFeedsLiveComponentView : AWEGrouponLifeFeedsBaseComponentView <AWELivePreviewStreamViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleContentView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWEGrouponLifeFeedsRecommendReasonView *recommendReasonView;
@property (retain, nonatomic) AWEGrouponLifeFeedsSaleInfoView *priceInfoView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGouponC2FeedDualAnchorView *coverBottomView;
@property (retain, nonatomic) AWEGradientView *coverBottomGradient;
@property (retain, nonatomic) AWENearbyPaddingLabel *adLabel;
@property (retain, nonatomic) AWEGouponC2FeedDualAnchorView *coverTopView;
@property (retain, nonatomic) AWEGrouponLifeFeedsUserInfoView *userInfoView;
@property (retain, nonatomic) UIView<AWELivePreviewStreamViewProtocol> *playerView;
@property (retain, nonatomic) NSMutableAttributedString *originalTitleAttributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cardPadding;

- (void)previewStreamViewStartPlay:(id)a0;
- (void)previewStreamViewPlayFinished:(id)a0;
- (void)trackPreviewPlayError;
- (void)updateCoverImage;
- (void)stopPlay;
- (void)startPlay;
- (void)handleTapGes:(id)a0;
- (id)liveModuleService;
- (void)bindViewModel:(id)a0;
- (void)stopLivePlayer;
- (void)loadImageURL:(id)a0 completion:(id /* block */)a1;
- (id)customTrackParams;
- (void)playWithMute:(BOOL)a0;
- (id)feedbackModelWithLongPress:(id)a0;
- (void)resetVC;
- (void)resetVideoPlayerVC;
- (id)appendLifeExtraParamsWithUrl:(id)a0;
- (id)createLivePreviewStreamView;
- (void)resetPlay;
- (void)playEnd;
- (void)updateInfoWithCellWidth:(double)a0;
- (void)updateUILayout;
- (id)liveViewModel;
- (id)buildLifeExtraInfo;
- (void)updateViewByNewStyle;
- (id)fetchLivePreviewStreamView;
- (long long)getTitleLimitLine;
- (void)updateTitleContentData;
- (id)fittedAttributedStringForLabel:(id)a0 withOriginalAttributedString:(id)a1;
- (void)asyncLoadImagesForTitleAttachments:(id)a0;
- (BOOL)isSimpleTruncation;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)canPlay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
