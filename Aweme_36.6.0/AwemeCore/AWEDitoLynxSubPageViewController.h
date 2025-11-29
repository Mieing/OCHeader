@class DitoMultiTabDataModel, NSString, AWEPOILynxContainerView;
@protocol DitoDataSupplierProtocol, DitoMultiTabContainerProtocol;

@interface AWEDitoLynxSubPageViewController : UIViewController <DitoMultiTabSubPageProtocol, AWEPOICubeViewDelegate, DitoMultiTabDelegateProtocol>

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (nonatomic) BOOL shouldReceiveMultiTabEvent;
@property (weak, nonatomic) id<DitoMultiTabContainerProtocol> container;
@property (retain, nonatomic) DitoMultiTabDataModel *pageModel;
@property (nonatomic) BOOL isDitoSubPage;
@property (weak, nonatomic) id<DitoDataSupplierProtocol> multiTabDataSupplier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraParamsForLynxView;
- (void)registerLynxCallBack;
- (void)configWithDitoMultiTabDataModel:(id)a0;
- (void)subPageDidMoveToContainer:(id)a0;
- (void)DitoMultiTabContainer:(id)a0 willMoveToTabModel:(id)a1 fromTabModel:(id)a2;
- (void)DitoMultiTabContainerDidScroll:(id)a0;
- (void)DitoMultiTabContainer:(id)a0 didMoveToTabModel:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
