@class UIImageView, UILabel;

@interface WCFinderColumnPostButton : MMUIButton

@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *btnLabel;
@property (retain, nonatomic) UIImageView *rightIconView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateWithText:(id)a0;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
