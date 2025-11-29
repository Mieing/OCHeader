@class AWEDataFreeModel, DUXToast, NSString, UILabel, UIView, UIButton;

@interface AWEDataFreeView : UIView <DUXToastDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *animationView;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) AWEDataFreeModel *model;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) DUXToast *duxToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)DUXToastDidShow:(id)a0;
- (void)DUXToastWillHidden:(id)a0;
- (void)DUXToastWillRemoved:(id)a0;
- (void)actionButtonClicked;
- (void)showAlertWithAnimation;
- (id)adapter_getCarrierService;
- (void)showOptDataFreeToast;
- (void)actionButtonClickedForOptToast;
- (id)getCarrierInternet;
- (id)initWithModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setupUI;

@end
