@class NSString, NSMutableSet, NSData, NSMutableArray;

@interface WCFinderTLRegardfulAuthorSingleListViewModel : WCFinderFollowTabDetailBaseViewModel

@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableSet *tidSet;
@property (retain, nonatomic) NSMutableArray *allDataItems;
@property (nonatomic) BOOL noMoreData;
@property (nonatomic) unsigned long long preFetchNextPageIndex;
@property (retain, nonatomic) NSData *lastBuf;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;

- (id)initWithUsername:(id)a0 lastTid:(id)a1 nonceID:(id)a2;
- (id)noDataTips;
- (id)noMoreDataTips;
- (BOOL)hasMoreData;
- (BOOL)hasFetchFirstPageData;
- (unsigned long long)allDataCount;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (long long)indexOfTid:(id)a0;
- (id)contentVMOfTid:(id)a0;
- (BOOL)needFetchFirstPageData;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)fetchDataWithIsFirstPage:(BOOL)a0;
- (void)appendDataItem:(id)a0;
- (void)appendContentVM:(id)a0;
- (void)deleteContentVM:(id)a0;
- (void)updateUploadingDataItem:(id)a0;
- (id)contentVmWithVM:(id)a0;
- (id)contentVMWithDataItem:(id)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end
