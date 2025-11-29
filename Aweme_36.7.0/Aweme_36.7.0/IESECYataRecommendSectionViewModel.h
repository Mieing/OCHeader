@class UIScrollView, NSString, UIView;
@protocol IESECYataRecommendContainer;

@interface IESECYataRecommendSectionViewModel : IESECYataBaseViewModel <IESECMallRecommendDelegate, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView *recommendView;
@property (weak, nonatomic) UIScrollView *recommendScrollView;
@property (weak, nonatomic) UIScrollView *bodyGestureScrollView;
@property (nonatomic) BOOL useNativeRecommend;
@property (nonatomic) BOOL hasSendRecommendViewRequest;
@property (nonatomic) BOOL gylDropCacheDataSwitch;
@property (nonatomic) BOOL recommendLoadFail;
@property (weak, nonatomic) id<IESECYataRecommendContainer> viewContainer;
@property (nonatomic) BOOL canShowRecommend;
@property (nonatomic) BOOL requestHideRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)bottomTabChangeRefreshGYL;
- (void)handleRecommendViewVisibilityChange:(BOOL)a0;
- (BOOL)recommendViewIsDarkMode:(id)a0;
- (id)recommendViewCurrentRouterParam:(id)a0;
- (id)recommendViewCurrentEnterFrom:(id)a0;
- (id)recommendViewCustomGlobalProps:(id)a0;
- (void)recommendScrollViewDidCreated:(id)a0;
- (void)handleClickProductAndBackCeiling;
- (void)handleHotStartRefreshCeiling;
- (BOOL)setHostScrollViewWithOffsetY:(double)a0 animated:(BOOL)a1 delayTime:(long long)a2;
- (BOOL)coverHostViewControllerWithOffsetY:(double)a0;
- (double)calculateBottomCoverAreaHeight;
- (void)dropCacheRefreshData;
- (void)sendNotificationWhenScrollViewWillBeginDragging;
- (void)loadRecommendViewIfNeeded;
- (void)reloadRecommendView:(id /* block */)a0 withActively:(BOOL)a1;
- (id)p_genLynxCardWithModel:(id)a0 Identifier:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)requestRecommendView;
- (void)requestRecommendViewActively:(BOOL)a0;
- (struct CGSize { double x0; double x1; })recommendCellSize;
- (void)reloadRecommendView:(id /* block */)a0;
- (BOOL)showGULTitle;
- (BOOL)p_cartUseNativeRecommend;
- (BOOL)p_orderListUseNativeRecommend;
- (BOOL)p_cartUseLynxRecommend;
- (BOOL)p_orderListUseLynxRecommend;
- (void)p_loadOrRefreshRecommendNativeView;
- (void)p_loadRecommendLynxView;
- (void)p_refreshRecommendNativeView;
- (void)p_loadOrRefreshRecommendNativeViewActively:(BOOL)a0;
- (void)p_resetRecommendLynxView;
- (void)p_requestRecommendNativeViewActively:(BOOL)a0;
- (id)p_genNativeRecommendView;
- (void)p_requestRecommendNativeView;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidEndScrolling;

@end
