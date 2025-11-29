@class NSArray, NSString, UICollectionView;

@interface AWERVLVAnchorView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *anchorContainerView;
@property (copy, nonatomic) NSArray *anchorInfoList;
@property (copy, nonatomic) id /* block */ itemShow;
@property (copy, nonatomic) id /* block */ itemClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
