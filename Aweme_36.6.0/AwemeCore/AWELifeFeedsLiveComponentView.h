@class UIView, NSString, AWENearbyPaddingLabel, UIImageView, AWEGradientView, AWELifeFeedsUserInfoView, NSMutableAttributedString, AWENearbyC2FeedDualAnchorView, UILabel;
@protocol AWELivePreviewStreamViewProtocol;

@interface AWELifeFeedsLiveComponentView : AWELifeFeedsBaseComponentView <AWELivePreviewStreamViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleContentView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UIView *priceInfoView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWENearbyC2FeedDualAnchorView *coverBottomView;
@property (retain, nonatomic) AWEGradientView *coverBottomGradient;
@property (retain, nonatomic) AWENearbyPaddingLabel *adLabel;
@property (retain, nonatomic) AWENearbyC2FeedDualAnchorView *coverTopView;
@property (retain, nonatomic) AWELifeFeedsUserInfoView *userInfoView;
@property (retain, nonatomic) UIView<AWELivePreviewStreamViewProtocol> *playerView;
@property (nonatomic) double recommendSize;
@property (nonatomic) double actualHeight;
@property (nonatomic) BOOL newStyle;
@property (nonatomic) BOOL simpleTruncation;
@property (retain, nonatomic) NSMutableAttributedString *originalTitleAttr;
@property (retain, nonatomic) NSMutableAttributedString *originalRecommendAttr;
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
- (BOOL)isNewStyle;
- (void)handleTapGes:(id)a0;
- (id)liveModuleService;
- (void)bindViewModel:(id)a0;
- (void)stopLivePlayer;
- (id)customTrackParams;
- (void)playWithMute:(BOOL)a0;
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
- (void)asyncLoadImagesForTitleAttachments:(id)a0;
- (BOOL)isSimpleTruncation;
- (id)spacerWithWidth:(double)a0;
- (void)asyncLoadImagesForRecommendReason:(id)a0;
- (id)rgbaStringFromARGBString:(id)a0;
- (void)updateRecommendReason;
- (void)updatePriceInfo;
- (double)calculateHeightWithServerFontSize:(double)a0;
- (void).cxx_destruct;
- (void)stop;
- (BOOL)canPlay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
