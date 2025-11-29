@class UIButton, UILabel, YYLabel;

@interface ACCAIGCLoraCreateInstructionsViewController : AWEHalfScreenSuperViewController

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ clickHighlightBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)confirmButtonDidClicked:(id)a0;
- (void)closeButtonDidClicked:(id)a0;
- (void)closeViewWithAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void)closeView;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)updateViews;
- (double)containerWidth;

@end
