@class NSArray, NSString, CAKAlbumCollectionItemModel, NSMutableArray;

@interface CAKAlbumCollectionSectionModel : NSObject

@property (copy, nonatomic) NSArray *collectionList;
@property (copy, nonatomic) NSArray *collectionSectionList;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) CAKAlbumCollectionItemModel *selectedCollectionItemForPreview;
@property (retain, nonatomic) NSMutableArray *deleteAssertIdentifierArray;
@property (nonatomic) BOOL collectionDataChanged;

- (id)initWithCollectionList:(id)a0 title:(id)a1;
- (void)updateCollectionSectionList;
- (void)sortCollectionSectionListIfNeeded;
- (void)syncCollectionListToCacheManager;
- (void)filterCollectionSectionAssetsWithChanges:(id)a0;
- (void)deleteItemStructsWithDeleteAssetIdentifiers:(id)a0 forCollectionItem:(id)a1;
- (void)updateItemStructsWithNewAssetIdentifiers:(id)a0 forCollectionItem:(id)a1;
- (void).cxx_destruct;
- (void)updateCollections:(id)a0;

@end
