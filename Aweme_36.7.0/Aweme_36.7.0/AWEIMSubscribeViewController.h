@class NSString;

@interface AWEIMSubscribeViewController : AWEBaseListViewController <AWERouterViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (id)sectionControllerClassArray;
- (void)__setupUI;
- (void)__backBtnClicked;
- (void)__addNavigationBarUnreadView;
- (void)rightBarButtonItenAction;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
