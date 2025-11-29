@class BDImageView, UIImageView, UILabel, AWEProfileEndorsementSubtitleLabel, AWEProfileEndorsementInfoModel;

@interface AWEProfileEndorsementItemCell : UICollectionViewCell

@property (retain, nonatomic) AWEProfileEndorsementInfoModel *model;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) AWEProfileEndorsementSubtitleLabel *subTitleLabel;

- (void)configWithModel:(id)a0;
- (void)configSubTitleWithModel:(id)a0;
- (void)configWithEmptyStyle;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)iconWidth;
- (double)labelFontSize;
- (void)setupUI;

@end
