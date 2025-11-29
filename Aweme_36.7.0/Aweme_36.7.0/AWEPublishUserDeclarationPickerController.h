@class DUXBasicSheet, NSString, ACCPublishUserDeclarationOption, AWEPublishUserDeclarationViewController, ACCPublishUserDeclarationModel, NSMutableDictionary;

@interface AWEPublishUserDeclarationPickerController : UIViewController <DUXSheetDelegate, AWEPublishUserDeclarationViewControllerDelegate>

@property (weak, nonatomic) DUXBasicSheet *basicSheet;
@property (retain, nonatomic) ACCPublishUserDeclarationModel *model;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) ACCPublishUserDeclarationOption *selectedOption;
@property (retain, nonatomic) AWEPublishUserDeclarationViewController *userDeclarationPanel;
@property (retain, nonatomic) NSString *creatId;
@property (retain, nonatomic) NSMutableDictionary *optionExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithPublishModel:(id)a0 scene:(id)a1 selectCompletion:(id /* block */)a2;
+ (void)selectedDefaultOptionWithPublishModel:(id)a0;
+ (void)trackerUserDeclarationOptionWithClickOption:(id)a0 Scence:(id)a1;
+ (id)defaultOptionArray;

- (void)sheetDidClickMaskArea:(id)a0;
- (BOOL)awe_shouldBypassPresentationHook;
- (void)handleBroadcastNotification:(id)a0;
- (id)bdxControllerWithURL:(id)a0;
- (double)p_getContentHeight;
- (id)initWithModel:(id)a0 selectedOption:(id)a1 optionExtra:(id)a2 creatId:(id)a3 completion:(id /* block */)a4;
- (id)handleOptionsWithModel:(id)a0;
- (void)selectNormalOption:(id)a0;
- (void)selectRouterOption:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)viewDidLoad;
- (void)showOnViewController:(id)a0;

@end
