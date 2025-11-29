@class ACCAIGCUGCFusionCreationToolsHotViewModel, NSString, UIImageView, UICollectionView, UILabel, UIView, NSMutableSet;
@protocol ACCAIGCUGCFusionCreationToolsShortcutViewDelegate;

@interface ACCAIGCUGCFusionCreationToolsShortcutView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *topGradientImageView;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSMutableSet *trackShotcutList;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsHotViewModel *model;
@property (weak, nonatomic) id<ACCAIGCUGCFusionCreationToolsShortcutViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minHeight;

- (void)onThemeChanged;
- (void)p_setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)bindService;
- (BOOL)shouldFitLightModeUI;
- (long long)shotcutCountInSection:(long long)a0;
- (void)updateDataWithCell:(id)a0 indexPath:(id)a1;
- (BOOL)needsFooter;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)isScrollable;
- (void)updateWithModel:(id)a0;
- (BOOL)validHeight;
- (void)didSelectIndexPath:(id)a0;

@end
