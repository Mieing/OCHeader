@class IESECWinFloatRootView, NSString, IESECRelationFloatLynxContainerController, IESECServiceProxy, FBKVOController, IESECUIButton, IESECWinContext;
@protocol IESECWinDataService, IESECWinMainScrollService, IESECWinTabService, IESECWinComponentService, IESECWinAuthorService, IESECWinCommonTrackService, IESECWinSplitService, IESECWinFeedService;

@interface IESECWinFloatVC : UIViewController <IESECRelationFloatLynxContainerControllerDelegate, IESECWinContextProtocol>

@property (copy, nonatomic) NSString *shoppingCartURL;
@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECUIButton *shopCartButton;
@property (retain, nonatomic) IESECUIButton *scrollToTopButton;
@property (retain, nonatomic) IESECWinFloatRootView *rootView;
@property (retain, nonatomic) IESECRelationFloatLynxContainerController *floatController;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinComponentService> *componentService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCommonTrackService> *commonTrackService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)a0 onSetup:(id)a1;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (BOOL)shouldAddToHiddenFloatViewWithComponentModel:(id)a0;
- (void)didFinishLoadFloatLynxContainer:(id)a0;
- (void)didFloatLynxContainerClosed:(id)a0;
- (void)configShoppingCartURL:(id)a0;
- (void)p_handleExtraSchemaIfNeeded;
- (void)scrollToTopShow;
- (void)subscribePendantEvents:(id)a0;
- (void)closeWindowContainerVC;
- (void)addResponseRect:(id)a0;
- (void)jumpToShopCart;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;

@end
