@class UIImageView, UILabel;

@interface RoomLabelPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;

- (void)changeHighlighted:(BOOL)a0;
- (void)updateWithIntroLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
