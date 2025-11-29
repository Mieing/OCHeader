@class WCSheetView, VoicePrintHeaderView, UIButton, VoicePrintCreateLogic, UIView, VoicePrintVerifyLogic, MMUILabel;

@interface VoicePrintEntryViewController : MMUIViewController

@property (retain, nonatomic) WCSheetView *sheetView;
@property (retain, nonatomic) VoicePrintHeaderView *headerView;
@property (retain, nonatomic) MMUILabel *createLabel;
@property (retain, nonatomic) UIButton *createButton;
@property (retain, nonatomic) UIView *itemsView;
@property (retain, nonatomic) VoicePrintCreateLogic *createLogic;
@property (retain, nonatomic) VoicePrintVerifyLogic *verifyLogic;
@property (nonatomic) BOOL voicePrintExists;
@property (nonatomic, getter=isVoicePrintSwitchOn) BOOL voicePrintSwitch;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)startCreateLogicWithCompletion:(id /* block */)a0;
- (void)startVerifyLogicWithCompletion:(id /* block */)a0;
- (void)onCreateWithResult:(unsigned int)a0 needSwitchOn:(BOOL)a1;
- (void)initView;
- (void)reloadItemsView;
- (void)reloadView;
- (void)changeForCreate;
- (void)changeForManage;
- (void)switchVoicePrint:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateVoicePrintFromStates:(unsigned int)a0;
- (void)onVoicePrintSwitchChanged:(id)a0;
- (void)onVoicePrintReset;
- (void)onVoicePrintVerify;
- (void)onVoicePrintCreate;
- (void).cxx_destruct;

@end
