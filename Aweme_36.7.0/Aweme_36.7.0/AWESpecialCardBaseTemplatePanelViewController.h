@class NSString, AWEAwemeModel, AWESpecialCardDoubleButtonComponent, AWESpecialCardScrollTipView, AWEAwemePageContext;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWESpecialCardBaseTemplatePanelViewController : UIViewController <AWESpecialCardPanelProtocol>

@property (retain, nonatomic) AWESpecialCardDoubleButtonComponent *btnComponent;
@property (retain, nonatomic) AWESpecialCardScrollTipView *tipView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEAwemePageContext *outerPageContext;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)videoWillPause;
- (void)videoWillReset;
- (void)videoWillLoopPlay;
- (void)onActionButtonClick;
- (void)setupPadTemplateComponent;
- (void)setupTemplateComponent;
- (void)setupButtonAction;
- (void)commitDislikeAndDelete;
- (void)trackActionButtonClick;
- (void)onDislikeButtonClick;
- (void)trackDislikeButtonClick;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;
- (void)willDisplay;

@end
