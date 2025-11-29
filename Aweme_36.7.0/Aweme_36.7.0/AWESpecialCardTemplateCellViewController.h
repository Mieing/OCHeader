@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionPanelDelegate, AWESpecialCardTemplateInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate;

@interface AWESpecialCardTemplateCellViewController : AWEFeedCellViewController

@property (retain, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWESpecialCardTemplateInteractionViewControllerProtocol> templateInteractionController;

- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (id)createInteractionController;
- (BOOL)enableFeedCardVideoControlDecoupling:(id)a0;
- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)viewDidLoad;
- (void)pageDidDisappear:(BOOL)a0;
- (void)pageWillAppear:(BOOL)a0;
- (void)pageWillDisappear:(BOOL)a0;

@end
