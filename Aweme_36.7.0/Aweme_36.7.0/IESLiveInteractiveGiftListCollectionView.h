@class UICollectionViewLayout, NSString, UICollectionView, UIView;
@protocol IESLiveInteractiveGiftListCollectionViewModelProtocol;

@interface IESLiveInteractiveGiftListCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *collectionViewMaskContainer;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) id<IESLiveInteractiveGiftListCollectionViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshCurrentList;
- (id)initWithCollectionViewModel:(id)a0;
- (void)deleteIndexPathWith:(id)a0;
- (void)addIndexPathWith:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)isValidIndexPath:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)setUpView;

@end
