@class NSString, NSArray, UICollectionView;
@protocol AWEVideoCoverTextEffectsViewDelegate;

@interface AWEVideoCoverTextEffectsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long selectedEffectType;
@property (copy, nonatomic) NSString *selectedEffectIdentifier;
@property (nonatomic) unsigned long long lastSelectedIndex;
@property (retain, nonatomic) NSArray *models;
@property (weak, nonatomic) id<AWEVideoCoverTextEffectsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellModelWithType:(unsigned long long)a0 effectId:(id)a1;
- (void)selectAndScrollToVisibleCellType:(unsigned long long)a0 effectId:(id)a1;
- (void)p_selectCellType:(unsigned long long)a0 effectId:(id)a1;
- (BOOL)p_cellModelIsSelected:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)commonInit;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
