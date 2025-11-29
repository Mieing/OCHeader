@class AWEPOINearbyHotSectionController, NSString, NSDictionary, AWEUILoadingView, AWEPOINearbyHotCollectionController, UIView;

@interface AWEPOINearbyHotViewController : UIViewController <AWEWaterFallCollectionControllerDelegate, UIGestureRecognizerDelegate, AWEZoomTransitionOuterContextProvider>

@property (retain, nonatomic) AWEPOINearbyHotCollectionController *collectionController;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *collectionEmptyView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEPOINearbyHotSectionController *awemeSectionController;
@property (copy, nonatomic) NSString *poiName;
@property (nonatomic) BOOL isMoreThanTwoVideo;
@property (copy, nonatomic) NSString *referStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)aweui_emptyPageContainerView;
- (void)p_loadMore;
- (unsigned long long)numberOfSectionsInCollectionController:(id)a0;
- (id)collectionController:(id)a0 sectionControllerOfSection:(unsigned long long)a1;
- (double)backgroundViewHeight;
- (id)initWithPoiID:(id)a0 poiName:(id)a1 longitude:(double)a2 latitude:(double)a3 isMoreThanTwoVideo:(BOOL)a4 prefetcher:(id)a5;
- (void)p_addLoadMoreFooter;
- (void)p_initialFetchWithCompletionHandler:(id /* block */)a0;
- (void)p_refreshDataWithIsInitialFetch:(BOOL)a0 completion:(id /* block */)a1;
- (void)autoLoadMoreWhenLessThanOnePage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)store;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;

@end
