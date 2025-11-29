@class NSString, UILabel, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveWebpLoadingView : UIView <AnnieCustomLoadingViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *loadingView;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *progressView;
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
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)stopAnimation;
- (id)init;
- (void)setLoadingText:(id)a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
