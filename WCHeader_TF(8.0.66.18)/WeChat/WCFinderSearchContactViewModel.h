@class WCFinderSearchItemReportQueue, NSString, WCFinderBaseCgi, NSData, NSMutableArray;
@protocol WCFinderSearchContactViewModelDelegate;

@interface WCFinderSearchContactViewModel : NSObject <WCFinderContactExt>

@property (copy, nonatomic) NSString *latestQueryText;
@property (copy, nonatomic) NSString *latestRequestID;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL queryContinueFlag;
@property (retain, nonatomic) NSMutableArray *allSearchInfoItems;
@property (retain, nonatomic) WCFinderSearchItemReportQueue *reportQueue;
@property (copy, nonatomic) NSString *searchSessionid;
@property (nonatomic) unsigned long long searchSourceType;
@property (retain, nonatomic) WCFinderBaseCgi *cgi;
@property (nonatomic) BOOL hasReportInputText;
@property (nonatomic) int scene;
@property (weak, nonatomic) id<WCFinderSearchContactViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithBuffer:(id)a0 latestRequestID:(id)a1 queryText:(id)a2 queryContinueFlag:(BOOL)a3 dataSources:(id)a4 searchSessionid:(id)a5 searchSourceType:(unsigned long long)a6;

- (id)init;
- (void)dealloc;
- (BOOL)isRepetSearch:(id)a0;
- (void)updateSearchSourceType:(unsigned long long)a0;
- (void)queryContactWith:(id)a0;
- (void)onQueryNextPageContact;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (void)resetSearchStatus;
- (unsigned long long)searchNumsOfSection;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)a0;
- (id)searchInfoAtIndexPath:(id)a0;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)a0;
- (void)reportHasInputSearchText;
- (void)reportSearchActionInfo:(id)a0 isClickActionType:(BOOL)a1;
- (void)recordResultDisplay:(id)a0;
- (void)reportItemExposeInfo;
- (void)onFinderContactFollowStatusUpdate:(id)a0;
- (void).cxx_destruct;

@end
