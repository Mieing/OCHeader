@class UILabel, UIImageView, UIView;

@interface AWEPayUIToastView : UIView

@property (retain, nonatomic) UIView *toastContainerView;
@property (retain, nonatomic) UIView *toastBcgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImgView;

+ (id)sharedView;

- (void)p_dismiss;
- (void)p_delayDismissWithDuration:(double)a0;
- (void)updateWithTitle:(id)a0 iconContent:(id)a1;
- (void)showToastWithTitle:(id)a0 iconContent:(id)a1 duration:(long long)a2;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
