@class IESLivePKFlexActivityPanelViewModel, UICollectionView, UserListArea, UICollectionViewFlowLayout, NSString;

@interface IESLivePKFlexActivityUserListArea : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UserListArea *area;
@property (retain, nonatomic) UICollectionView *registeredUserCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) IESLivePKFlexActivityPanelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 areaIndex:(unsigned long long)a1;
- (id)setupDescriptionLabel;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)layoutUI;

@end
