@class NSArray, UICollectionView, NSString, AWEProfileHeaderContext, UIViewController;
@protocol AWEProfileHeaderEndorsementCellDelegate;

@interface AWEProfileHeaderEndorsementCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, AWEPadUIAdaptionViewTransitionObserver, AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) id<AWEProfileHeaderEndorsementCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (BOOL)isSame:(id)a0 with:(id)a1;
- (id)padService;
- (void)configWithHeaderContext:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
