@class UIFont, NSString, UIImageView, UIColor, UILabel, UIView;

@interface CJPayCustomImageLoadingView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (nonatomic) long long imageType;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *subTitleStr;
@property (nonatomic) BOOL toastAfterLoading;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;

+ (id)sharedView;

- (id)p_imageNameWithType:(long long)a0;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showLoading;

@end
