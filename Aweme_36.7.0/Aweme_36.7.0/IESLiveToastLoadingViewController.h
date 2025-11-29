@class CAShapeLayer, IESLiveToastLoadingConfig, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveToastLoadingViewController : UIViewController

@property (retain, nonatomic) IESLiveToastLoadingConfig *config;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *imageContainerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *progressLayer;

- (id)p_createImageView;
- (void)p_createCloseButton;
- (void)p_createUI;
- (void)p_tapCloseButton;
- (void)p_createImageContainerView;
- (void)p_createProcessLoading;
- (id)p_createLottieAnimation:(id)a0;
- (id)p_showWebpImage:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)show;

@end
