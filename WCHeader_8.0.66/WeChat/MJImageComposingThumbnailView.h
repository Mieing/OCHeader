@class MJImageComposingDeletingButton, NSString, UICollectionView, MJImageComposingViewModel, UICollectionViewFlowLayout, NSIndexPath, UILongPressGestureRecognizer;
@protocol MJImageComposingThumbnailViewDelegate;

@interface MJImageComposingThumbnailView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGR;
@property (retain, nonatomic) NSIndexPath *addingIndexPath;
@property (retain, nonatomic) NSIndexPath *moveSourceIndexPath;
@property (retain, nonatomic) NSIndexPath *moveDestinationIndexPath;
@property (retain, nonatomic) MJImageComposingDeletingButton *deletingButton;
@property (nonatomic) BOOL isDeletingButtonVisible;
@property (readonly, nonatomic) MJImageComposingViewModel *viewModel;
@property (weak, nonatomic) id<MJImageComposingThumbnailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)_bindViews;
- (void)_setupViews;
- (void)_layoutViews;
- (void)_updateLayoutIfNeeded;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)reloadData;
- (void)_handleThumbnailDidUpdate:(id)a0 forScene:(id)a1;
- (void)_switchToSceneAtIndex:(unsigned long long)a0;
- (void)_handleSceneDidSwitch:(id)a0;
- (void)_handleSceneDidAdd;
- (void)_removeSceneAtIndex:(unsigned long long)a0;
- (void)_handleSceneDidRemove;
- (void)_handleSelectAtIndexPath:(id)a0;
- (void)_handleLongPressGesture:(id)a0;
- (BOOL)_isPointOverDeletingButton:(struct CGPoint { double x0; double x1; })a0;
- (void)_showDeletingButtonAnimated:(BOOL)a0;
- (void)_hideDeletingButtonAnimated:(BOOL)a0;
- (long long)_itemCount;
- (void)_updateAddingIndexPath;
- (void).cxx_destruct;

@end
