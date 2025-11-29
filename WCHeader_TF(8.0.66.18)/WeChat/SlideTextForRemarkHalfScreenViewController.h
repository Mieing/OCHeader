@class SlideTextJSHandler, WSTemplateLogicController, NSString, MMPageSheetAdapter, WSWebViewPluginScheduler, UIButton;

@interface SlideTextForRemarkHalfScreenViewController : MMUIHalfScreenViewController <WSWebViewPluginableProtocol, SlideTextDelegate>

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) WSTemplateLogicController *logicController;
@property (retain, nonatomic) SlideTextJSHandler *jsHandler;
@property (retain, nonatomic) NSString *helloMsg;
@property (retain, nonatomic) NSString *selectedText;
@property (nonatomic) long long currentCharLength;
@property (nonatomic) long long maxCharLength;
@property (weak, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (nonatomic) BOOL isInPageSheetMode;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (id)createInitLeftBarItem;
- (id)createInitRightBarItem;
- (double)getContentViewYInPageSheetMode;
- (double)getVisibleHeight;
- (void)onCancelInPageSheetMode:(id)a0;
- (void)onDoneInPageSheetMode:(id)a0;
- (id)initWithHelloMsg:(id)a0 currentCharLength:(long long)a1 maxCharLength:(long long)a2;
- (void)initPlugin;
- (void)initLogicController;
- (void)viewDidLoad;
- (void)initTopView;
- (void)viewDidLayoutSubviews;
- (void)onDone;
- (void)onSelectedTextChanged:(id)a0;
- (void)DismissMyselfAnimatedSlideTextForRemark;
- (id)getRightBarButton;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)a0;
- (void).cxx_destruct;

@end
