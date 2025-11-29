@class UIImageView, UILabel;

@interface AWEShowRewardToast : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *toastLabel;
@property (retain, nonatomic) UILabel *amountLabel;

+ (void)showImageToastWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)showImageToastWithModel:(id)a0;
+ (void)showCoinRewardCustomToastWithText:(id)a0 amount:(int)a1;
+ (void)showCoinRewardCustomToastWithText:(id)a0 amount:(int)a1 completion:(id /* block */)a2;

- (void)setupToastView:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
