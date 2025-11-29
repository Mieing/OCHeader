@class IESLiveInteractionOptionListBubbleViewModel, NSString, UIImageView, UICollectionView, UIView;

@interface IESLiveInteractionOptionListBubbleView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) IESLiveInteractionOptionListBubbleViewModel *viewModel;
@property (weak, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *anchorArrow;
@property (retain, nonatomic) UIView *shadow;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ willSelect;
@property (copy, nonatomic) id /* block */ didSelect;
@property (copy, nonatomic) id /* block */ didHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 container:(id)a1;
- (void)popupAtBottomOf:(id)a0 willSelect:(id /* block */)a1 didSelect:(id /* block */)a2 didHide:(id /* block */)a3;
- (void)didTapAtEmptyArea;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;

@end
