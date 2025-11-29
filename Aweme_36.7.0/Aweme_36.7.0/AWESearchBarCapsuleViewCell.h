@class UILabel, UIImageView, UITapGestureRecognizer;

@interface AWESearchBarCapsuleViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UITapGestureRecognizer *tap;

+ (double)itemWidthWithText:(id)a0;

- (void)updateTextColor:(id)a0;
- (void)resetDefaultBkgColorAndCornerRadius;
- (void)updateIconName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithText:(id)a0;

@end
