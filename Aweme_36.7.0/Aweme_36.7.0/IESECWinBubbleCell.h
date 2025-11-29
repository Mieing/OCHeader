@class NSString, UICollectionView, IESECWinBubbleObject, UICollectionViewFlowLayout;

@interface IESECWinBubbleCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) IESECWinBubbleObject *object;
@property (copy, nonatomic) id /* block */ clickItemWithIndex;
@property (copy, nonatomic) id /* block */ showItemWithIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)bubbleCardTypeWithCount:(long long)a0;
+ (double)bubbleCardWidth:(unsigned long long)a0;
+ (double)bubbleCardHeight:(unsigned long long)a0;

- (void)updateWithObject:(id)a0;
- (id)bubbleCellWithIndex:(long long)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
