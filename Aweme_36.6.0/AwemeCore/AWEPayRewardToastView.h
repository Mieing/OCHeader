@class UIImageView, UILabel, UIView;

@interface AWEPayRewardToastView : UIView

@property (retain, nonatomic) UIView *toastContainerView;
@property (retain, nonatomic) UIView *toastBcgView;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIImageView *plusImgView;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *unitLabel;

+ (id)sharedView;

- (void)p_dismiss;
- (void)p_delayDismissWithDuration:(double)a0;
- (void)showToastWithAmount:(id)a0 unitDesc:(id)a1 iconContent:(id)a2 duration:(long long)a3;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
