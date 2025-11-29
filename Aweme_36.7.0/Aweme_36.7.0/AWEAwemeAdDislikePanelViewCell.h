@class NSString, NSArray, UICollectionView, AWEAwemeModel, UIView, NSMutableArray, UIButton;

@interface AWEAwemeAdDislikePanelViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *dislikeBackgroundView;
@property (retain, nonatomic) UICollectionView *dislikeCollectionView;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) NSMutableArray *selectedItems;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSArray *noWantLookArray;
@property (retain, nonatomic) NSArray *feedbackArray;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitButtonClicked;
- (void)configWithModel:(id)a0;
- (void)updateSubmitButtonTitle;
- (id)itemModelAtIndexPath:(id)a0;
- (id)handleSelectedItems;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;

@end
