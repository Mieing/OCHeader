@class IESECStorePageContext, NSString, UIView, UIViewController;
@protocol IESECShopPageContextV2, IESECStoreContainerProtocol, IESECShopLayoutManager, IESECShopControllerManagerV2;

@interface IESECRelationController : NSObject <IESECShopControllerV2, IESECShopEventSubscriber, IESECRelationControllerProtocol>

@property (weak, nonatomic) id<IESECShopPageContextV2> pageContextV2;
@property (weak, nonatomic) id<IESECShopLayoutManager> layoutManager;
@property (weak, nonatomic) id<IESECShopControllerManagerV2> controllerManagerV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<IESECStoreContainerProtocol> *container;
@property (weak, nonatomic) IESECStorePageContext *pageContext;
@property (weak, nonatomic) UIView *rootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageContextV2;
- (id)controllerManagerV2;
- (void)headerTypeDidChange:(unsigned long long)a0;
- (void)switchTheme:(unsigned long long)a0;
- (void)pagerView:(id)a0 willMoveToTab:(id)a1;
- (void)pagerView:(id)a0 cancelMoveToTab:(id)a1;
- (void)pagerView:(id)a0 didMoveToTab:(id)a1;
- (void)setPageContextV2:(id)a0;
- (void)setControllerManagerV2:(id)a0;
- (void)didSetPageContextV2:(id)a0;
- (void)controllerDidLoad;
- (void)controllerWillAppear:(BOOL)a0;
- (void)controllerWillDisappear:(BOOL)a0;
- (void)iesecshop_headerTypeDidChange:(unsigned long long)a0;
- (void)iesecshop_themeTypeDidChange:(unsigned long long)a0;
- (void)iesecshop_pagerViewDidReload:(id)a0;
- (void)iesecshop_pagerViewDidLayoutSubviews:(id)a0;
- (void)iesecshop_pagerView:(id)a0 willMoveToTab:(id)a1;
- (void)iesecshop_pagerView:(id)a0 cancelMoveToTab:(id)a1;
- (void)iesecshop_pagerView:(id)a0 didMoveToTab:(id)a1;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewWillBeginDragging:(id)a1;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewWillEndDragging:(id)a1 withVelocity:(struct CGPoint { double x0; double x1; })a2 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a3;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewDidEndDecelerating:(id)a1;
- (void)iesecshop_pagerView:(id)a0 tabScrollViewDidScroll:(id)a1;
- (void)iesecshop_pagerView:(id)a0 tabScrollViewWillBeginDragging:(id)a1;
- (void)iesecshop_pagerView:(id)a0 tabScrollViewDidEndDecelerating:(id)a1;
- (void)iesecshop_pagerView:(id)a0 tabScrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)controllerDidAppear:(BOOL)a0;
- (void)controllerDidDisappear:(BOOL)a0;
- (id)layoutManager;
- (void).cxx_destruct;
- (void)setLayoutManager:(id)a0;

@end
