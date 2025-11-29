@class AWEIMTaskNaviBarView, AWEIMTaskPlatformContext, UICollectionView, AWEIMTaskPlatformViewDataSource, NSString, NSMutableArray, UIButton;

@interface AWEIMTaskPlatformViewController : UIViewController <UICollectionViewDelegate, AWEIMTaskNaviBarViewDelegate, UICollectionViewDelegateFlowLayout, AWEIMTaskPlatformDetailViewControllerDelegate, UIGestureRecognizerDelegate, AWEIMTaskCardManagerDelegate>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) AWEIMTaskNaviBarView *navibarView;
@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (retain, nonatomic) AWEIMTaskPlatformContext *context;
@property (retain, nonatomic) AWEIMTaskPlatformViewDataSource *datasource;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSMutableArray *settingImageArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (id)currentVC;
- (void)setEnableScroll:(BOOL)a0;
- (void)onCardDataChange;
- (id)__createCollectionView:(long long)a0 cellClass:(Class)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)navigationDidSelectItem:(id)a0;
- (void)__setupNavigationBar;
- (void)__setupContentView;
- (id)__cellItemForCardType:(long long)a0;
- (void)__setCurrentVCDidAppear;
- (void)didScrollToPage:(long long)a0;
- (void)onSettingClick;
- (void)onBackButtonClick;
- (void)__setSelectItem:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
