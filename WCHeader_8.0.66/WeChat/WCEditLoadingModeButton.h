@class UIView, UIImageView, MMUIActivityIndicatorView;

@interface WCEditLoadingModeButton : MMUIButton

@property (weak, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UIView *crookBackGroundView;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) UIView *loadingView;
@property (weak, nonatomic) UIImageView *crookIconView;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubviews;
- (void)setCrookIconBackGroundColor:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)updateButtonState;
- (void).cxx_destruct;

@end
