@class ACCAIGCUGCFusionCreationToolsHotViewModel, NSString, UIImageView, UICollectionView, UILabel, ACCAIGCUGCFusionCreationToolsShotcutTail, NSMutableSet;
@protocol ACCAIGCUGCFusionCreationToolsHotViewDelegate;

@interface ACCAIGCUGCFusionCreationToolsHotView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsShotcutTail *tail;
@property (retain, nonatomic) NSMutableSet *trackShotcutList;
@property (retain, nonatomic) NSMutableSet *trackInspirationList;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsHotViewModel *model;
@property (weak, nonatomic) id<ACCAIGCUGCFusionCreationToolsHotViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)updateWithModel:(id)a0 isRefresh:(BOOL)a1;
- (long long)shotcutCountInSection:(long long)a0;
- (void)updateDataWithCell:(id)a0 indexPath:(id)a1;
- (BOOL)needsFooter;
- (void)closeImageViewDidClicked:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateWithModel:(id)a0;
- (void)didSelectIndexPath:(id)a0;

@end
