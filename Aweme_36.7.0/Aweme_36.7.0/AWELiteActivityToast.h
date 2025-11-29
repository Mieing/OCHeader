@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface AWELiteActivityToast : UIView

@property (copy, nonatomic) NSString *toastText;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *toastLabel;
@property (retain, nonatomic) UILabel *secondToastLabel;
@property (retain, nonatomic) UIView *amountView;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *amountSuffixLabel;
@property (nonatomic) BOOL isNewStyle;
@property (retain, nonatomic) UIImageView *expImageView;
@property (retain, nonatomic) UILabel *expLabel;
@property (nonatomic) double toastScale;

+ (void)showToast:(id)a0 withType:(long long)a1;
+ (void)showTextToast:(id)a0;
+ (void)showImageToast:(id)a0;
+ (void)showImageToastWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)showImageToastWithModel:(id)a0;
+ (void)showToast:(id)a0 withImage:(id)a1;

- (id)initWithText:(id)a0 image:(id)a1;
- (void)setupCustomToast:(id)a0;
- (void)setupGoldAndExperienceToast:(id)a0;
- (void)setupGoldToast:(id)a0;
- (void)setupExperienceToast:(id)a0;
- (BOOL)canShowToastWithNewStyle:(id)a0;
- (id)tryToGetAmountInToast:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
