@class UIButton, UILabel;
@protocol AWEBatManManagerProtocol;

@interface AWEBatManQualityBaseViewController : UIViewController

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIButton *buttonSelected;
@property (nonatomic, getter=isSwitching) BOOL switching;
@property (weak, nonatomic) UILabel *titleLbl;
@property (weak, nonatomic) UIButton *SDBtn;
@property (weak, nonatomic) UIButton *HDBtn;
@property (weak, nonatomic) UIButton *FHDBtn;
@property (weak, nonatomic) id<AWEBatManManagerProtocol> delegate;

- (void)configUI;
- (void)onSDBtnClicked:(id)a0;
- (id)createQualityBtnWithTitle:(id)a0 tag:(long long)a1 defaultIndex:(long long)a2 action:(SEL)a3;
- (void)onHDBtnClicked:(id)a0;
- (void)onFHDBtnClicked:(id)a0;
- (void)onQualityChangedWithSender:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithCompletion:(id /* block */)a0;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
