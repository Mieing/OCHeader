@class UILabel, AWETripleColumnPlayletCardDogCardView, AWETripleColumnPlayletCardActorView, UIImage, UIView, AWEGradientView, BDImageView;

@interface AWETripleColumnPlayletSectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *playCountView;
@property (retain, nonatomic) BDImageView *playCountIcon;
@property (retain, nonatomic) UILabel *playCountLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWETripleColumnPlayletCardActorView *actorView;
@property (retain, nonatomic) AWETripleColumnPlayletCardDogCardView *dogCardView;
@property (nonatomic) double startLoadCoverTime;
@property (copy, nonatomic) id /* block */ trackCoverLoad;
@property (copy, nonatomic) id /* block */ trackTagShow;
@property (copy, nonatomic) id /* block */ trackTagClick;

+ (id)identifier;

- (double)titleFontForCurrentBreakPoint;
- (void)configWithSectionItem:(id)a0 canShowActorView:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupLayout;

@end
