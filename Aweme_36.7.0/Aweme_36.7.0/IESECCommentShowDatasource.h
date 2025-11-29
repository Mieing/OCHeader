@class NSArray, NSString, IESECCommentShowDataManager, IESECCommentShowConfig;

@interface IESECCommentShowDatasource : NSObject <UICollectionViewDataSource, IESECCollectionViewLayoutDelegate>

@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) IESECCommentShowDataManager *dataManager;
@property (weak, nonatomic) IESECCommentShowConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 layoutForSection:(long long)a1;
- (id)cellModelWithCommentDetail:(id)a0;
- (double)flowLayoutHeightWithWidth:(double)a0 item:(unsigned long long)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)registerCells:(id)a0;

@end
