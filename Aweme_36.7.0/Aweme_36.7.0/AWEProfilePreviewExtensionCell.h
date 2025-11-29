@class UILabel, AWEProfileExtensionAreaCellViewModel, BDImageView;

@interface AWEProfilePreviewExtensionCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEProfileExtensionAreaCellViewModel *model;

+ (double)preferWidthWithModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
