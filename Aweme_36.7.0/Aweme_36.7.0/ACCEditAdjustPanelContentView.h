@class NSArray, NSString, UICollectionView;
@protocol ACCEditAdjustPanelDelegate, ACCEditAdjustPanelDataSource;

@interface ACCEditAdjustPanelContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id<ACCEditAdjustPanelDelegate> delegate;
@property (weak, nonatomic) id<ACCEditAdjustPanelDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshAdjustSelectedState;
- (void)reloadFinished:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
