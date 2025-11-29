@class UIButton, UIImage;
@protocol IStatusBarDelegate;

@interface AFEStatusBar : UIView

@property (weak, nonatomic) id<IStatusBarDelegate> delegate;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImage *cancelImage;
@property (retain, nonatomic) UIImage *userCancelImage;
@property (nonatomic) long long closeButtonType;

- (void)onButtonCancel;
- (void)_buildShowView;
- (void)setCancelButtonHidden:(BOOL)a0;
- (void)setCancelButtonImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateView;
- (void)layoutSubviews;
- (void)setTransparent:(double)a0;

@end
