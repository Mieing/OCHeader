@class UIView;

@interface WCFinderApplyAcceptPhoneViewController : MMUIViewController

@property (copy, nonatomic) id /* block */ complete;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *detailView;

+ (void)showVCFromVC:(id)a0 complete:(id /* block */)a1;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)createDetailView;
- (id)createButtonWithTitle:(id)a0 titleColor:(id)a1 bgColor:(id)a2 action:(SEL)a3;
- (void)onClickCancelBtn;
- (void)onClickAccept;
- (void)close:(BOOL)a0;
- (void).cxx_destruct;

@end
