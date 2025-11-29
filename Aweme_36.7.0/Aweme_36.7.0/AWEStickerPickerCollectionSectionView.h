@class UILabel;

@interface AWEStickerPickerCollectionSectionView : UICollectionReusableView

@property (retain, nonatomic) UILabel *nameLabel;

- (void)updateWithFontSize:(double)a0;
- (void)updateWithFontColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithTitle:(id)a0;

@end
