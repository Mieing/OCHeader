@class UILabel, UIImageView, UIColor;

@interface MMLiveSlottedTextFieldSlotView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (retain, nonatomic) UIColor *invalidSelectedBorderColor;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL invalid;
@property (nonatomic) BOOL useImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateBorder;
- (void).cxx_destruct;

@end
