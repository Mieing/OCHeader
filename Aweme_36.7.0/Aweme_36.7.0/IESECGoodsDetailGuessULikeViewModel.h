@class UIScrollView, NSString, UIView;
@protocol IESECMallRecommendViewProtocol;

@interface IESECGoodsDetailGuessULikeViewModel : IESECGoodsDetailPageBaseViewModel <IESECMallRecommendDelegate>

@property (nonatomic) BOOL showGul;
@property (nonatomic) BOOL isInvalidProduct;
@property (weak, nonatomic) UIScrollView *recommendScrollView;
@property (retain, nonatomic) UIView<IESECMallRecommendViewProtocol> *recommendView;
@property (nonatomic) BOOL manualClickRecommendView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (BOOL)recommendViewIsDarkMode:(id)a0;
- (id)recommendViewCurrentRouterParam:(id)a0;
- (void)recommendScrollViewDidCreated:(id)a0;
- (void)recommendView:(id)a0 finishRefreshMainList:(BOOL)a1 error:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewPortOnWindow;
- (void)setupCurrentViewSize;
- (void)preloadRecommendView;
- (void).cxx_destruct;

@end
