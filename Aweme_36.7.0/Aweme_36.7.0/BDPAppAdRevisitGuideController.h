@class UIButton, NSString, UIView;

@interface BDPAppAdRevisitGuideController : UIViewController

@property (weak, nonatomic) UIView *lottieContainerView;
@property (weak, nonatomic) UIButton *closeButtonView;
@property (weak, nonatomic) UIButton *confirmButtonView;
@property (nonatomic) BOOL isHasDone_showAction;
@property (readonly, copy, nonatomic) NSString *lottieFilePath;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) id /* block */ showAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ confirmAction;

- (id)initWithLottieFilePath:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
