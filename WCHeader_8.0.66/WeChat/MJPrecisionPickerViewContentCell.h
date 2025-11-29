@class UIView;

@interface MJPrecisionPickerViewContentCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *pickerContentView;

- (void)prepareForReuse;
- (void)configPickerContentView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
