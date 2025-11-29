@class UIImageView, UILabel, UIView;

@interface IESLiveChargeLoadingView : UIView

@property (retain, nonatomic) UIView *loadingContainer;
@property (nonatomic) BOOL enableNewStyle;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textView;

+ (id)showIn:(id)a0 enableNewStyle:(BOOL)a1;
+ (id)showIn:(id)a0;

- (void)setupUIs;
- (id)initEnableNewStyle:(BOOL)a0;
- (void)dismiss;
- (void)startAnimation;
- (void).cxx_destruct;

@end
