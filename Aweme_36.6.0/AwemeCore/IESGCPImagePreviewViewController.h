@class NSMutableArray, NSString, UICollectionView, IESGCPImagePreviewTranslation, UIView, IESGCPImagePreviewConfig, UILabel;

@interface IESGCPImagePreviewViewController : IESGCPAutorotateViewController <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIViewControllerTransitioningDelegate, IESGCPImagePreviewCellDelegate>

@property (retain, nonatomic) IESGCPImagePreviewConfig *imageConfig;
@property (nonatomic) BOOL needShowIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *indexBgView;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) IESGCPImagePreviewTranslation *previewTranslation;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) id /* block */ didDisplayImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableScroll:(BOOL)a0;
- (void)updateIndexLabelWithIndex:(long long)a0;
- (void)setupConstraintsWithOrientation:(long long)a0;
- (id)initWithConfig:(id)a0 canRotate:(BOOL)a1 diContext:(id)a2;
- (void)imagePreviewCellSingleTapWithModel:(id)a0;
- (void)imagePreviewCellTouchMoveChangeMainViewAlpha:(double)a0;
- (void)subViewHidden:(BOOL)a0;
- (void)gotoPage:(long long)a0 animated:(BOOL)a1;
- (void)adjustScrollView:(struct CGSize { double x0; double x1; })a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)setupCollectionView;
- (void)setupUI;
- (void)initData;

@end
