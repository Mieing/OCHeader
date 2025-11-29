@class AWERVDetailPageContext, UIImageView, AWEAwemeModel, UIView, UILabel, BDImageView;

@interface AWERelatedVideoDetailVideoRelatedVideoListCell : UICollectionViewCell

@property (retain, nonatomic) UIView *highlightBackgroundView;
@property (retain, nonatomic) BDImageView *coverView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *durationContainerView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UIImageView *danmuImageView;
@property (retain, nonatomic) UILabel *danmuCountLabel;
@property (retain, nonatomic) UIView *cornerMarkView;
@property (retain, nonatomic) UILabel *cornerMarkLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *guideFlowIcon;
@property (retain, nonatomic) UILabel *guideFlowLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (copy, nonatomic) id /* block */ renderImgBlock;
@property (copy, nonatomic) id /* block */ renderTextBlock;
@property (copy, nonatomic) id /* block */ didRenderLongVideoCoverBlock;

- (id)formateCount:(id)a0;
- (id)getTitleAttributedString;
- (void)setCornerMarkLabelWithAlbumModel:(id)a0;
- (void)updateAwemeModelForLongVideo:(id)a0;
- (void)setLongVideoTitle:(id)a0 title:(id)a1;
- (id)getTitleLabelText;
- (void)setUIHidden:(BOOL)a0 config:(id)a1;
- (void)setupUIForLongVideo;
- (void)updateNewCoverRatioUIForLongVideoWithContext:(id)a0;
- (void)updateAuthorLabelForGuideFlow;
- (void)updateAuthorLabelForNormal;
- (void)updateNewCoverRatioUIForMediumVideoWithContext:(id)a0;
- (void)updateAwemeModel:(id)a0 uiConfig:(id)a1 pageContext:(id)a2;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
