@class NSMutableDictionary, NSArray, CAKAlbumCollectionModel, NSString, NSMutableArray, NSCache;

@interface CAKAlbumCollectionManager : NSObject <CAKPhotoLibraryChangeObserver>

@property (nonatomic) unsigned long long setupStatus;
@property (retain, nonatomic) CAKAlbumCollectionModel *albumCollectionModel;
@property (retain, nonatomic) NSMutableArray *usableCollectionArray;
@property (retain, nonatomic) NSMutableArray *usableMarketCollectionArray;
@property (retain, nonatomic) NSMutableArray *todaySnapshotCollectionArray;
@property (retain, nonatomic) NSMutableDictionary *albumCollectionSectionMap;
@property (retain, nonatomic) NSCache *assetCache;
@property (retain, nonatomic) NSCache *coverImageCache;
@property (retain, nonatomic) NSMutableArray *phChangeMutableArray;
@property (retain, nonatomic) NSMutableArray *p_setupCompletionArray;
@property (readonly, nonatomic) NSArray *needCachedCollectionArray;
@property (readonly, nonatomic) NSArray *validMarketCollectionArray;
@property (readonly, nonatomic) NSArray *phChangeArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (long long)maxCacheCount;
- (void)photoLibraryDidChangeInBackground:(id)a0;
- (void)setTaskId:(id)a0 forCollectionID:(id)a1;
- (void)cleanMemoryCollectionDataForCurrentUser;
- (id)getSuggestionPlaceholderCollection;
- (void)insertCollections:(id)a0;
- (void)setupContentWithCompletion:(id /* block */)a0;
- (long long)validCollectionAssetCountMin;
- (void)setupTodaySnapshotCollectionArrayIfNeeded;
- (id)albumAssetsWithIdentifiers:(id)a0;
- (BOOL)deleteAssetIdentifierList:(id)a0 fromCollectionID:(id)a1;
- (BOOL)appendAssetIdentifierList:(id)a0 fromCollectionID:(id)a1;
- (BOOL)updateAssetIdentifierList:(id)a0 fromCollectionID:(id)a1;
- (id)taskIdWithCollectionID:(id)a0;
- (void)filterAndGenerateUsableCollectionArrayV2;
- (void)checkUsableMarketCollectionArray;
- (void)setupAlbumCollectionSectionMap;
- (void)triggerCollectionDataChangedNotification;
- (void)readFromDisk:(id /* block */)a0;
- (id)albumCollectionDataCacheKey;
- (void)logInsertCollectionStruct:(id)a0 failed:(BOOL)a1 reason:(id)a2 todayNotDisplayType:(long long)a3;
- (BOOL)needSortCollectionList;
- (BOOL)isSameDayWithFirst:(id)a0 second:(id)a1;
- (id)albumAssetWithIdentifier:(id)a0;
- (void)deleteCollection:(id)a0;
- (void)updateSortedCollectionList:(id)a0;
- (id)albumCollectionSectionWithSectionIdentifier:(id)a0;
- (void)filterAndGenerateUsableCollectionArray;
- (void)addAlbumChangedNotification;
- (void)triggerLocalAlbumAssetsChangedNotification:(id)a0;
- (long long)maxSortCount;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (id)init;
- (void)saveToDisk;
- (void)insertCollection:(id)a0;
- (void)clean;

@end
