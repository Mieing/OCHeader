@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEFeedHotSpotInteractionViewControllerProtocol, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate;

@interface AWEFeedHotSpotCellViewController : AWEAwemeDetailCellViewController

@property (retain, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEFeedHotSpotInteractionViewControllerProtocol> hotInteractionController;
@property (nonatomic) BOOL useSpecialCardTemplateLynxCell;

- (BOOL)isCommonFeedCellVC;
- (void)onlySendPlayEvent;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (BOOL)getCanShowBottomBarInListCell;
- (void)detailViewWillDisappear;
- (id)createInteractionController;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)reset;
- (void)viewDidLoad;
- (void)configureWithModel:(id)a0;

@end
