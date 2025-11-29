@class DUXBasicSheet, NSArray, NSDictionary, UICollectionView, NSString;

@interface ACCAIGCPointsTaskViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, DUXSheetDelegate>

@property (copy, nonatomic) NSArray *taskItems;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (copy, nonatomic) id /* block */ didSelectItemBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_titleForColoseButton;
- (id)initWithTaskItems:(id)a0 extraDict:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)setupUI;

@end
