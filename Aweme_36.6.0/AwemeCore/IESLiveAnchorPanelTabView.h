@class NSArray, NSString, UICollectionView;
@protocol IESLiveAnchorPanelTabViewDelegate;

@interface IESLiveAnchorPanelTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *tabModels;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<IESLiveAnchorPanelTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectedItemAtIndex:(long long)a0 source:(long long)a1;
- (void)updateTabCellAtIndex:(long long)a0 selected:(BOOL)a1;
- (id)initWithTabModels:(id)a0;
- (void)update:(id)a0 selectedIndex:(long long)a1 source:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupCollectionView;

@end
