@class UIButton, UILabel, YYLabel;

@interface ACCAIGCUGCFusionCreationToolsLawViewController : AWEHalfScreenSuperViewController

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *navigationLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UILabel *contentLabel1;
@property (retain, nonatomic) UILabel *contentLabel2;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ clickHighlightBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;

+ (BOOL)hasShowed;
+ (void)setHasShowed;
+ (id)hasShowedCacheKey;

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
- (void)viewDidAppear:(BOOL)a0;
- (void)updateViews;
- (double)containerWidth;

@end
