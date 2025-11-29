@class NSArray, CAKAlbumCollectionStruct;

@interface CAKAlbumCollectionItemModel : NSObject

@property (retain, nonatomic) CAKAlbumCollectionStruct *collectionStruct;
@property (copy, nonatomic) NSArray *assetArray;

- (long long)AIMemoriesTaskStatus;
- (id)initWithCollectionStruct:(id)a0;
- (void)updateAssetArray;
- (void)updateAssetArraySort;
- (double)generatedTimeScore;
- (double)materialInLastWeekScore;
- (double)historyDisplayScore;
- (void)deleteItemStructWithDeleteAssetIdentifiers:(id)a0;
- (void)appendItemStructWithAssetIdentifiers:(id)a0;
- (void)updateItemStructWithAssetIdentifiers:(id)a0;
- (void)filterAssetArrayWithChanges:(id)a0;
- (id)AIMemoriesTaskID;
- (id)timeRangeLabelForContent;
- (double)collectionSortScore;
- (void).cxx_destruct;

@end
