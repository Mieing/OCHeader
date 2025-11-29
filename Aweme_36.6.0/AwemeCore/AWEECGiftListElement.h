@class NSString, NSArray, UICollectionView, NSDictionary, UICollectionViewFlowLayout, NSIndexPath, AWEListDataController;

@interface AWEECGiftListElement : LynxUI <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEAwemeDetailTableViewControllerDelegate, AWEModernFullscreenTransitionOuterContextProvider>

@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) UICollectionView *feedView;
@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSDictionary *cellIDStrategy;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (retain, nonatomic) NSIndexPath *transitonIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__690;
+ (id)__lynx_prop_config__901;
+ (id)__lynx_prop_config__1032;
+ (id)__lynx_prop_config__1083;

- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillAppear:(id)a0 currentAwemeModel:(id)a1;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (long long)preferScaleMode;
- (void)p_registerCellFor:(id)a0;
- (id /* block */)p_cameraClickBlock;
- (id /* block */)p_videoClickBlock;
- (void)p_statusHandler:(id)a0 withIndex:(unsigned long long)a1;
- (void)p_handleVideoRecordFinishedNty:(id)a0;
- (void)data:(id)a0 requestReset:(BOOL)a1;
- (void)contentinset:(id)a0 requestReset:(BOOL)a1;
- (void)space:(double)a0 requestReset:(BOOL)a1;
- (void)videosize:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)dealloc;
- (id)createView;

@end
