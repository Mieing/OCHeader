@class UIView, NSString, DUXContentSheet, UITapGestureRecognizer, AWEHPBottomTabEditPanelBottomView, AWEHPBottomTabEditCollectionViewController, DUXButton, AWEHPBottomEditPanelConfig;

@interface AWEHPBottomTabEditPanelViewController : UIViewController <DUXSheetDelegate>

@property (retain, nonatomic) AWEHPBottomEditPanelConfig *config;
@property (retain, nonatomic) DUXButton *primaryButton;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) AWEHPBottomTabEditPanelBottomView *bottomView;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) double panelHeight;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEHPBottomTabEditCollectionViewController *editCollectionVC;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (nonatomic) long long originIndex;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *editPanelTitle;
@property (copy, nonatomic) NSString *primaryButtonText;
@property (copy, nonatomic) id /* block */ panelDidDismiss;
@property (copy, nonatomic) id /* block */ updateSelectedItemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)originItem;
- (void)clickCloseButton;
- (void)updatePanelThemeStyle:(long long)a0;
- (void)dismissPanelNeedAnimated:(BOOL)a0 dismissType:(long long)a1;
- (void)showPanelOnVC:(id)a0 completion:(id /* block */)a1;
- (void)tabBarBeginLandingTab:(id)a0;
- (void)p_dismissPanelNeedAnimated:(BOOL)a0 dismissType:(long long)a1;
- (void)clickConfirmButton;
- (void)p_clickMask:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (id)selectedItem;
- (void)setupUI;

@end
