@class UIView, NSString, DUXContentSheet, UIImageView, AWEShareGoodsModel, AWEPanelTransitionController, UIViewController, UILabel;

@interface AWEECShareFriendHelpViewController : UIViewController <DUXSheetDelegate>

@property (nonatomic) double height;
@property (retain, nonatomic) AWEShareGoodsModel *model;
@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (retain, nonatomic) UIImageView *backGround;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *qrCodeView;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ dismissPassiveHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (weak, nonatomic) UIViewController *onViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)configWithModel:(id)a0;
- (void)addDismissedHandler:(id /* block */)a0;
- (void)addWillDismissHandler:(id /* block */)a0;
- (void)updatePanelHeight:(double)a0;
- (void)configDuxSheetIsPortrait:(BOOL)a0;
- (void)clickCloseIcon:(id)a0;
- (id)initWithHeight:(double)a0 model:(id)a1;
- (void)showOnViewController:(id)a0 mixInteraction:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleTabDidChangeNotification;
- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
