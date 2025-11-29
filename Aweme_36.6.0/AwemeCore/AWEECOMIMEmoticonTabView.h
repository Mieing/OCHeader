@class NSArray, NSString, UICollectionView;

@interface AWEECOMIMEmoticonTabView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSArray *tabArr;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTabSelectedIndex:(long long)a0;
- (void)scrollToSelectedWithIndex:(long long)a0 animation:(BOOL)a1;
- (id)initWithTabArr:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
