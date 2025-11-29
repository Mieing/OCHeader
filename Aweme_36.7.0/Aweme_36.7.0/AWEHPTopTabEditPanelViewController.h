@class DUXBasicSheet, NSString, AWEHPTopTabEditPanelConfigModel, AWEHPTopTabEditPanelConfig, UIView, UIViewController;
@protocol AWEHPTopTabEditViewControllerProtocol;

@interface AWEHPTopTabEditPanelViewController : UIViewController <DUXSheetDelegate>

@property (retain, nonatomic) AWEHPTopTabEditPanelConfig *config;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIViewController<AWEHPTopTabEditViewControllerProtocol> *editTableVC;
@property (retain, nonatomic) AWEHPTopTabEditPanelConfigModel *editPanelConfigModel;
@property (nonatomic) double panelHeight;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)showPanel;
- (id)aAWEPadModuleAdapter;
- (void)clickCloseButton;
- (id)p_generateTitle;
- (void)callSaveBlockIfNeed;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)setUpUI;

@end
