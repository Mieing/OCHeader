@class UILabel, UIView;

@interface IESECWebpLoadingView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) long long type;

- (id)loadingProgressView;
- (id)loadingAnimationView;
- (id)layoutContainerViewWithLabel:(id)a0 progressView:(id)a1;
- (void)layoutLoadingView:(id)a0 textContainer:(id)a1 type:(long long)a2;
- (void)layoutDefaultLoadingView:(id)a0 textContainer:(id)a1;
- (void)layoutSmallLoadingView:(id)a0 textContainer:(id)a1;
- (void)layoutSmallTextLoadingView:(id)a0 textContainer:(id)a1;
- (struct CGSize { double x0; double x1; })loadingSizeWithType:(long long)a0;
- (id)animatedViewWithImageName:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)init;

@end
