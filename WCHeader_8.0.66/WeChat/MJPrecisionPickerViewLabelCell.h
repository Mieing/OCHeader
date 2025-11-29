@class UILabel, UIView;

@interface MJPrecisionPickerViewLabelCell : UICollectionViewCell

@property (retain, nonatomic) UIView *indicatorView;
@property (nonatomic) BOOL isShowIndicator;
@property (retain, nonatomic) UILabel *label;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
