@class NSData, NSString, FinderPaidCollectionInfo, NSArray, FinderJumpInfo, FinderCollectionInfo, NSMutableSet, FinderCollectionErrPage, WCFinderFeedArray;

@interface WCFinderCollectionDataFetcher : NSObject <WCFinderFeedArrayDelegate, WCFinderCollectionFeedListInfoUpdatableProvider, WCFinderInteractiveDetailListDataProvider>

@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isPullingTop;
@property (nonatomic) BOOL isPullingBottom;
@property (nonatomic) BOOL isPullingFirstPage;
@property (nonatomic) BOOL isJumpingToBreakPage;
@property (nonatomic) BOOL upContinueFlag;
@property (nonatomic) BOOL downContinueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo;
@property (retain, nonatomic) FinderCollectionErrPage *collectionErrPage;
@property (copy, nonatomic) NSString *fromTid;
@property (retain, nonatomic) FinderJumpInfo *creatorEntranceJumpInfo;
@property (readonly, nonatomic) NSArray *contentVMs;
@property (nonatomic) BOOL hasFetchData;
@property (readonly, nonatomic) int commentScene;
@property (retain, nonatomic) NSString *finderUsername;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *itemContentVMs;

+ (BOOL)isFeedArray:(id)a0 intersectWithDataItems:(id)a1;

- (id)initWithCollectionInfo:(id)a0 fromTid:(id)a1;
- (id)initWithCollectionInfo:(id)a0 firstContentVM:(id)a1 fromTid:(id)a2;
- (void)onFeedArray:(id)a0 insertContentVMS:(id)a1 removeContentVMS:(id)a2;
- (void)appendDataItems:(id)a0 resetPreviousFeeds:(BOOL)a1 direction:(int)a2;
- (void)updateCollecetionInfoIfNeeded:(id)a0;
- (void)updatePaidCollectionInfoIfNeeded:(id)a0;
- (void)fetchFirstPageData:(id /* block */)a0;
- (void)fetchNextPageData:(int)a0 complete:(id /* block */)a1;
- (void)fetchPageDataWithTid:(id)a0 direction:(int)a1 complete:(id /* block */)a2;
- (long long)contentIndexOfSortID:(unsigned long long)a0;
- (long long)contentIndexOfTid:(id)a0;
- (id)contentVMWithTid:(id)a0;
- (BOOL)hasMoreTop;
- (BOOL)hasMoreBottom;
- (void)pullTop:(id /* block */)a0;
- (void)pullBottom:(id /* block */)a0;
- (void)pullFirstPage:(id /* block */)a0;
- (void)jumpToPageWithTid:(id)a0 isRollingUp:(BOOL)a1;
- (unsigned long long)collectionTopicID;
- (id)contentVMAtIndex:(long long)a0;
- (void)deleteItemAtIndex:(long long)a0;
- (BOOL)hasMoreData;
- (void).cxx_destruct;

@end
