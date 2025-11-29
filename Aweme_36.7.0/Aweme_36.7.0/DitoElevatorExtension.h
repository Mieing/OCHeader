@class DitoPageContext, NSString, DitoNestedScrollExtensionV2, NSMutableArray, DitoNestedScrollExtension;
@protocol DitoExtensionContainerProtocol;

@interface DitoElevatorExtension : NSObject <DitoExtensionProtocol>

@property (nonatomic) double offsetY;
@property (nonatomic) double timeInterval;
@property (retain, nonatomic) NSMutableArray *monitorNodeMoveToTopTask;
@property (retain, nonatomic) NSMutableArray *monitorNodeSubViewMoveToTopTask;
@property (weak, nonatomic) DitoNestedScrollExtension *nestedScrollExtension;
@property (weak, nonatomic) DitoNestedScrollExtensionV2 *nestedScrollExtensionV2;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageDidScroll:(id)a0;
- (void)pageWillBeginDragging:(id)a0;
- (void)locateToNodeWithTag:(id)a0 needAnimation:(BOOL)a1 offsetY:(double)a2 needScrollToExpanded:(BOOL)a3 anchorToPageTop:(BOOL)a4 targetSubViewID:(id)a5 includeStickyContainer:(BOOL)a6 completeBlock:(id /* block */)a7;
- (void)monitorNodeScrollToTop:(id)a0;
- (void)monitorNodeSubViewScrollToTop:(id)a0;
- (double)cardMarginTopWithTag:(id)a0 targetSubViewID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
