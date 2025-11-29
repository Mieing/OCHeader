@class NSString, IESECRelationPageContext, UIView, NSMutableArray;
@protocol IESECRelationControllerProtocol, IESECRelationContainerProtocol;

@interface IESECRelationControllerManager : NSObject <IESECRelationControllerProtocol>

@property (weak, nonatomic) id<IESECRelationContainerProtocol> container;
@property (weak, nonatomic) IESECRelationPageContext *pageContext;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) NSMutableArray<IESECRelationControllerProtocol> *controllerArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllerByProtocol:(id)a0;
- (id)controllerArrayBySelector:(SEL)a0;
- (id)controllersByProtocol:(id)a0;
- (void)removeAllControllers;
- (void)pagerViewDidLayoutSubviews:(id)a0;
- (void)pagerViewDidReload:(id)a0;
- (void)pagerView:(id)a0 tabScrollViewWillBeginDragging:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewDidEndDecelerating:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)pagerView:(id)a0 mainScrollViewWillBeginDragging:(id)a1;
- (void)pagerView:(id)a0 tabScrollViewDidScroll:(id)a1;
- (void)pagerView:(id)a0 mainScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)pagerView:(id)a0 mainScrollViewDidEndDecelerating:(id)a1;
- (void)loadControllersWithContainer:(id)a0 pageContext:(id)a1 rootView:(id)a2;
- (void)headerTypeDidChange:(unsigned long long)a0;
- (void)switchTheme:(unsigned long long)a0;
- (void)pagerView:(id)a0 willMoveToTab:(id)a1;
- (void)pagerView:(id)a0 cancelMoveToTab:(id)a1;
- (void)pagerView:(id)a0 didMoveToTab:(id)a1;
- (void)addController:(id)a0 forProtocol:(id)a1;
- (void)removeController:(id)a0;
- (void).cxx_destruct;
- (void)addController:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
