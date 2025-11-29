@class AWEPlayInteractionSocialTagsViewModel, NSString, UICollectionView;

@interface AWEPlayInteractionSocialTagsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, AWENearbySocialTagsViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEPlayInteractionSocialTagsViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)updateSocialTagsViewWithModel:(id)a0;
- (void)onSocialTagShow;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
