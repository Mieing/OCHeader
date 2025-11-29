@class MMUIActivityIndicatorView, MJTransitionInspectorViewModel, UICollectionView, NSString;
@protocol MJTransitionInspectorViewDelegate;

@interface MJTransitionInspectorView : MJSegmentInspectorView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (weak, nonatomic) id<MJTransitionInspectorViewDelegate> delegate;
@property (readonly, nonatomic) MJTransitionInspectorViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)loadContent;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateCellSelection;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
