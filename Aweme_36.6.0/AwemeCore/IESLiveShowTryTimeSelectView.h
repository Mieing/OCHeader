@class NSArray, NSString, UICollectionView;

@interface IESLiveShowTryTimeSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL needGray;
@property (copy, nonatomic) NSArray *tryTimeArray;
@property (nonatomic) long long lastSelectTimeRow;
@property (copy, nonatomic) id /* block */ TryTimeSelectBlock;
@property (nonatomic) long long lastSelectTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectedCell;
- (id)tryTimeText:(id)a0;
- (void)updateGrayColor;
- (void)revertToBeforeColor;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setUpUI;

@end
