@class NSString, AWESearchAIGCInputCreatePanelRequirementCellViewModel, UICollectionView;
@protocol AWESearchAIGCInputCreatePanelRequirementCellDelegate;

@interface AWESearchAIGCInputCreatePanelRequirementCell : AWESearchAIGCInputCreatePanelBaseCell <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) AWESearchAIGCInputCreatePanelRequirementCellViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWESearchAIGCInputCreatePanelRequirementCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightWithViewModel:(id)a0;

- (void)themeChange;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
