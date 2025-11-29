@class NSString;

@interface WWKFSessionContentViewController : BaseMsgContentViewController <WASessionArrowTitleViewDelegate, WAUINavigationControllerDelegate>

@property (retain, nonatomic) NSString *chatSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkKfMagicBrushEnv;
- (BOOL)shouldShowQuickReplyPush:(id)a0;
- (void)viewDidLoad;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)wwkfContentLogicController;
- (void)onBackButtonClicked:(id)a0;
- (void)headerImageClicked:(id)a0;
- (void)updateTitleAndSubTitleView:(id)a0;
- (void)onClickTitle;
- (void)onWeAppSessionMsgBtnHide;
- (void)onWeAppSessionMsgBtnClick:(id)a0;
- (BOOL)navigationController:(id)a0 shouldUsePresentWhenPushViewController:(id)a1 animated:(BOOL)a2 scene:(unsigned long long)a3;
- (void).cxx_destruct;

@end
