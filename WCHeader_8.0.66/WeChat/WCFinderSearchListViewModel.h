@class WCFinderSearchItemReportQueue, NSString, NSArray, NSData, WCFinderSearchKVReporter, FinderEventInfo;
@protocol WCFinderSearchDataProvider, WCFinderSearchListViewModelDelegate;

@interface WCFinderSearchListViewModel : NSObject

@property (copy, nonatomic) NSString *latestQueryText;
@property (retain, nonatomic) FinderEventInfo *pageEventInfo;
@property (retain, nonatomic) WCFinderSearchItemReportQueue *itemReportQueue;
@property (copy, nonatomic) NSString *searchSessionid;
@property (nonatomic) BOOL forbidenSearchText;
@property (retain, nonatomic) NSData *objHotwordInfoBuff;
@property (retain, nonatomic) NSString *lastReqeustId;
@property (retain, nonatomic) id<WCFinderSearchDataProvider> dataProvider;
@property (retain, nonatomic) WCFinderSearchKVReporter *reporter;
@property (nonatomic) int inlineSearchScene;
@property (nonatomic) BOOL hasReportInputText;
@property (weak, nonatomic) id<WCFinderSearchListViewModelDelegate> delegate;
@property (readonly, nonatomic) unsigned long long refreshTime;
@property (readonly, nonatomic) NSArray *allSearchDataItems;

- (id)init;
- (id)initWithInlineSearchScene:(int)a0;
- (id)initWithSessionId:(id)a0 inlineSearchScene:(int)a1;
- (id)searchDataItemAtIndexPath:(id)a0;
- (id)searchDataItemAtSection:(long long)a0;
- (BOOL)isRepetSearch:(id)a0;
- (void)beginSearchWithQueryText:(id)a0 searchSourceType:(unsigned long long)a1;
- (void)beginSearchWithQueryText:(id)a0 latestRequestID:(id)a1 dataArray:(id)a2 tabId:(long long)a3 lastBuffer:(id)a4 continueFlag:(BOOL)a5;
- (void)beginSearchWithHotWordList:(id)a0 currentHotWord:(id)a1 objHotwordInfoBuff:(id)a2 hotWordListBuffer:(id)a3 forbidenSearchText:(BOOL)a4 scene:(int)a5 reportSeachScene:(unsigned long long)a6;
- (void)cleanSearchContent;
- (id)generateHotwordList:(id)a0 firstWord:(id)a1;
- (void)updateCurrentDisplayHotWord:(id)a0;
- (void)onQueryNextPageDataItems;
- (BOOL)isNoMoreData;
- (BOOL)isLoading;
- (long long)contentIndexOfTid:(id)a0;
- (id)contentVMOfTid:(id)a0;
- (long long)numberOfSection;
- (int)searchScene;
- (void)recordResultDisplay:(id)a0;
- (void)reportItemExposeInfo;
- (void)reportHasInputSearchText;
- (BOOL)deleteAllSearchRecord;
- (BOOL)deleteSearchRecord:(id)a0;
- (void)reportSearchActionInfo:(id)a0 isClickActionType:(BOOL)a1;
- (void).cxx_destruct;

@end
