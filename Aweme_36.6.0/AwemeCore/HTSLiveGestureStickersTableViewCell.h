@class NSString, UIImageView, UICollectionView, UIView, HTSLiveGestureStickersViewModel, NSMutableSet;

@interface HTSLiveGestureStickersTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIImageView *categoryIconImageView;
@property (retain, nonatomic) UIView *gestureStickersCollectionViewContainer;
@property (retain, nonatomic) UICollectionView *gestureStickersCollectionView;
@property (weak, nonatomic) HTSLiveGestureStickersViewModel *viewModel;
@property (nonatomic) long long row;
@property (retain, nonatomic) NSMutableSet *downloadingIndices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithViewModel:(id)a0 row:(long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setSelectedIndex:(long long)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)setupUI;

@end
