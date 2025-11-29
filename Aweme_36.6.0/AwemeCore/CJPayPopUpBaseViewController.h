@class UIView;

@interface CJPayPopUpBaseViewController : CJPayBaseViewController

@property (nonatomic) BOOL isFirstAppear;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIView *backColorView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ closeActionCompletionBlock;

- (id)presentWithNavigationControllerFrom:(id)a0 useMask:(BOOL)a1 completion:(id /* block */)a2;
- (long long)vcType;
- (BOOL)isShowMask;
- (id)presentWithNavigationControllerFrom:(id)a0 useMask:(BOOL)a1 presentStyle:(long long)a2 completion:(id /* block */)a3;
- (BOOL)cjNeedAnimation;
- (BOOL)cjShouldShowBottomView;
- (double)maskAlpha;
- (void)dismissSelfWithCompletionBlock:(id /* block */)a0;
- (void)showMask:(BOOL)a0;
- (void)removeSelfForNavigationStack;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)setupUI;

@end
