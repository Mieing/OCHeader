@class UIImageView, UILabel, UIView;

@interface AWETeenHotSpotCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *pageviewLabel;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIView *emptyTitleLabel;
@property (retain, nonatomic) UIView *emptyPageviewLabel;

- (void)configWithHotSpotModel:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
