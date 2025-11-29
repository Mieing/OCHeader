@class UIImageView, UILabel;

@interface MJImageComposingDeletingButton : UIButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL isInHighlightState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)_setupViews;
- (void)switchToHighlightStateAnimated:(BOOL)a0;
- (void)switchToNormalStateAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
