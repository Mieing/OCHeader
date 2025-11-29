@class NSArray, NSDictionary, NSString;
@protocol AWESearchScanHistoryCellDelegate;

@interface AWESearchScanHistoryContentDataSource : NSObject <UICollectionViewDataSource>

@property (nonatomic) BOOL cellShouldShowDeleteIcon;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) NSDictionary *modelDict;
@property (retain, nonatomic) NSArray *numberOfItemsInEachSection;
@property (retain, nonatomic) NSArray *sortedDateKeys;
@property (weak, nonatomic) id<AWESearchScanHistoryCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModels:(id)a0;
- (void)registerReusableView:(id)a0;
- (void)switchCellsDeleteStatusOn:(id)a0 status:(BOOL)a1;
- (id)getAllHistoryItemScanID;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
