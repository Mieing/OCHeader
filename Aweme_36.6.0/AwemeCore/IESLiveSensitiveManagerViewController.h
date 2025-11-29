@class IESLiveSensitiveNewView, UIScrollView, NSDictionary, IESLiveSensitiveStore, IESLiveSensitiveInputView, UIView, UIButton;

@interface IESLiveSensitiveManagerViewController : UIViewController

@property (retain, nonatomic) IESLiveSensitiveNewView *headerView;
@property (retain, nonatomic) IESLiveSensitiveStore *store;
@property (retain, nonatomic) IESLiveSensitiveInputView *inputView;
@property (nonatomic) BOOL keyboardDidHide;
@property (retain, nonatomic) UIButton *keyboardMaskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSDictionary *trackDic;

- (void)refreshHeader;
- (void)keyBoardWillShow:(id)a0;
- (void)fetchSensitiveWords;
- (void)keyBoardWillHidden:(id)a0;
- (void)addActionsSuccessTrack:(BOOL)a0 error:(id)a1 content:(id)a2;
- (void)hiddenSensitiveInputView;
- (void)landShowSensitiveInputView:(double)a0;
- (void)keyboardMaskViewAction;
- (void)addSensitiveWord:(id)a0;
- (void)deleteSensitiveWord:(id)a0 index:(long long)a1;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)addButtonAction:(id)a0;
- (id)errorMessage:(id)a0;

@end
