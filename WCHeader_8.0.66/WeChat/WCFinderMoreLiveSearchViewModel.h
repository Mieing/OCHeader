@class WCFinderBaseCgi, NSString, NSData, NSMutableArray;
@protocol WCFinderMoreLiveSearchViewModelDelegate;

@interface WCFinderMoreLiveSearchViewModel : NSObject <WCFinderContactExt>

@property (retain, nonatomic) NSString *latestQueryText;
@property (retain, nonatomic) NSString *latestRequestID;
@property (nonatomic) BOOL queryContinueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *allSearchInfoItems;
@property (retain, nonatomic) NSMutableArray *allSearchDataItems;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) unsigned long long searchSourceType;
@property (retain, nonatomic) WCFinderBaseCgi *finderSearchCGI;
@property (weak, nonatomic) id<WCFinderMoreLiveSearchViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *searchSessionid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)resetSearchStatus;
- (id)latestQueryString;
- (BOOL)isSearchFeedItemEmpty;
- (void)updateSearchSourceType:(unsigned long long)a0;
- (BOOL)isRepeatSearch:(id)a0;
- (void)appendInfos:(id)a0;
- (void)appendDataItems:(id)a0;
- (long long)dataItemSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)a0;
- (BOOL)isSearchInfoCountGreaterThanMax;
- (id)searchDataItemAtIndexPath:(id)a0;
- (id)searchInfoAtIndexPath:(id)a0;
- (BOOL)isSearchInfoSection:(unsigned long long)a0;
- (BOOL)isSearchDataItemSection:(unsigned long long)a0;
- (unsigned long long)searchNumsOfSection;
- (BOOL)isNoMoreData;
- (id)generateSearchContactViewModel;
- (void)onQueryNextPageDataItem;
- (void)queryContactWith:(id)a0;
- (void)queryContactWith:(id)a0 sessionBuf:(id)a1 scene:(unsigned long long)a2;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)a0;
- (void)onFinderContactFollowStatusUpdate:(id)a0;
- (void)reportSearchActionInfo:(id)a0 isClickActionType:(BOOL)a1;
- (void).cxx_destruct;

@end
