@class NSDictionary, UILabel, ACCAIGCLoraCreateExampleView, UIButton;

@interface ACCAIGCLoraCreateExampleViewController : AWEHalfScreenSuperViewController

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *navigationLabel;
@property (retain, nonatomic) ACCAIGCLoraCreateExampleView *tipsView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (BOOL)hasShowed;
+ (void)setHasShowed;
+ (id)hasShowedCacheKey;

- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)confirmButtonDidClicked:(id)a0;
- (void)closeButtonDidClicked:(id)a0;
- (void)closeViewWithAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void)trackRoleSuggestionWindowShow;
- (void)closeView;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)containerWidth;

@end
