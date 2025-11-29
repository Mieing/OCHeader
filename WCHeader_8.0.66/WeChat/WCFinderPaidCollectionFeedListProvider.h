@class FinderCollectionErrPage, NSString, FinderCollectionInfo, NSData, WCFinderFeedArray, FinderPaidCollectionInfo;

@interface WCFinderPaidCollectionFeedListProvider : NSObject <WCFinderFeedArrayDelegate, WCFinderCollectionFeedListInfoUpdatableProvider>

@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isPullingTop;
@property (nonatomic) BOOL isPullingBottom;
@property (nonatomic) BOOL isPullingFirstPage;
@property (nonatomic) BOOL upContinueFlag;
@property (nonatomic) BOOL downContinueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSString *fromTid;
@property (nonatomic) BOOL hasFetchData;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo;
@property (retain, nonatomic) FinderCollectionErrPage *collectionErrPage;
@property (retain, nonatomic) FinderPaidCollectionInfo *firstItemPaidInfo;
@property (readonly, nonatomic) FinderCollectionInfo *collectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPaidCollection:(id)a0 fromTid:(id)a1;
- (void)fetchFirstPageData:(id /* block */)a0;
- (void)fetchNextPageData:(int)a0 complete:(id /* block */)a1;
- (void)_fetchNextPageData:(int)a0 firstPage:(BOOL)a1 complete:(id /* block */)a2;
- (void)insertLocalCacheFeedIfNeed;
- (int)commentScene;
- (void)appendDataItems:(id)a0 clear:(BOOL)a1 direction:(int)a2;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1 removeContentVMS:(id)a2;
- (BOOL)hasMoreTop;
- (BOOL)hasMoreBottom;
- (void)pullTop:(id /* block */)a0;
- (void)pullBottom:(id /* block */)a0;
- (void)pullFirstPage:(id /* block */)a0;
- (unsigned long long)collectionTopicID;
- (void).cxx_destruct;

@end
