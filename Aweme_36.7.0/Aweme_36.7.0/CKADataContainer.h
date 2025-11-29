@class CKAAlbumCollectionModel, NSArray;

@interface CKADataContainer : NSObject {
    void /* function */ uncategorizedDataReady;
    void /* function */ categoryFetchCompletion;
    void /* unknown type, empty encoding */ obtainCategoryContainerPendingCompletions;
    void /* function */ finalAlbumsFetchCompletion;
    void /* unknown type, empty encoding */ categoryContainerDict;
    void /* unknown type, empty encoding */ dictRecursiveMutexLock;
    void /* unknown type, empty encoding */ arrayRecursiveMutexLock;
    void /* unknown type, empty encoding */ dataSequence;
    void /* unknown type, empty encoding */ globalFetchResult;
    void /* unknown type, empty encoding */ libraryObserver;
    void /* function */ collectionModels;
    void /* unknown type, empty encoding */ mediaTransform;
    void /* unknown type, empty encoding */ mediaTransProvider;
    void /* unknown type, empty encoding */ needFetchData;
    void /* unknown type, empty encoding */ fetchGlobalDataDuration;
}

@property (nonatomic, copy) id /* block */ uncategorizedDataReady;
@property (nonatomic, copy) id /* block */ categoryFetchCompletion;
@property (nonatomic, copy) id /* block */ finalAlbumsFetchCompletion;
@property (nonatomic, readonly) long long count;
@property (nonatomic) long long imageCount;
@property (nonatomic) long long videoCount;
@property (nonatomic, weak) void /* function */ dataDescription;
@property (nonatomic, retain) CKAAlbumCollectionModel *currentCollectionModel;
@property (nonatomic, copy) NSArray *collectionModels;

- (id)albumCollectionAtIndex:(long long)a0;
- (void)updateCurrentAlbumCollectionWithIndex:(long long)a0;
- (void)appendAlbumCollection:(id)a0;
- (void)appendAlbumCollections:(id)a0;
- (id)initWithCurrentCollectionModel:(id)a0 collectionModels:(id)a1 dataDescription:(id)a2;
- (void)updateSourceWithCurrentCollectionModel:(id)a0 collectionModels:(id)a1;
- (id)categoryContainerByCategoryID:(id)a0;
- (void)fetchDataIfNeeded;
- (void)obtainContainerBycategoryID:(id)a0 completion:(id /* block */)a1;
- (void)updateFlexibleFetchResult:(id)a0;
- (void)updateFlexibleAlbum:(id)a0;
- (id)subscribe:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
