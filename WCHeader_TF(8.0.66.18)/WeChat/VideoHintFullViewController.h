@class UILabel, UIView;

@interface VideoHintFullViewController : MMUIViewController

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *controlLabel;
@property (retain, nonatomic) UIView *line;

- (void)viewDidLoad;
- (void)initView;
- (void)onBack:(id)a0;
- (void)animationForControlShow;
- (void)animationForControlHide;
- (void).cxx_destruct;

@end
