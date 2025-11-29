@class AWEGradientView, UILabel, UIView, BDImageView;
@protocol AWELiveShowTagViewProtocol;

@interface AWETheaterHistoryContentCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *leftBottomLabel;
@property (retain, nonatomic) UIView *videoTagBackgroundView;
@property (retain, nonatomic) UILabel *videoTagLabel;
@property (retain, nonatomic) id<AWELiveShowTagViewProtocol> tagViewModel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UIView *updateView;
@property (retain, nonatomic) UILabel *updateLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (id)reuseIdentifier;

- (void)configWithSectionItem:(id)a0;
- (void)tagViewCustomWithItem:(id)a0;
- (void)layoutContent;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
