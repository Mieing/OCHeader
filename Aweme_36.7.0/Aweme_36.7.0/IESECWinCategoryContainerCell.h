@class IESECWinCategoryCell, UICollectionView, IESECBubbleView, UICollectionViewFlowLayout, NSString, IESECWinCategoryObject;
@protocol IESECWinCategoryContainerCellDelegate;

@interface IESECWinCategoryContainerCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    IESECWinCategoryObject *_object;
}

@property (retain, nonatomic) UICollectionView *containerView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) IESECBubbleView *guideBubbleView;
@property (retain, nonatomic) IESECWinCategoryCell *attachCell;
@property (weak, nonatomic) id<IESECWinCategoryContainerCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObject:(id)a0;
- (void)removeGuideBubbleView;
- (void)showGuideBubbleView:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpConstraints;

@end
