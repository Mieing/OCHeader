@class NSMutableDictionary, AWEEcomSearchFIFOQueue, NSDictionary, NSArray, NSLock, NSMutableArray;
@protocol AWEEcomSearchResultPageContext, AWEEcomSearchPitayaEventReceiverProtocol;

@interface AWESearchEcommerceActionRecord : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *impressions;
@property (retain, nonatomic) NSMutableArray *clicks;
@property (retain, nonatomic) AWEEcomSearchFIFOQueue *LRUClicks;
@property (retain, nonatomic) AWEEcomSearchFIFOQueue *LRUimpressions;
@property (copy, nonatomic) NSDictionary *realtimePushConfig;
@property (copy, nonatomic) NSArray *queryInfo;
@property (copy, nonatomic) NSArray *hasInsertDocInfo;
@property (weak, nonatomic) id<AWEEcomSearchResultPageContext> pageContext;
@property (weak, nonatomic) id<AWEEcomSearchPitayaEventReceiverProtocol> eventReceivePage;
@property (nonatomic) long long maxRank;
@property (nonatomic) BOOL enableRealtimePush;
@property (nonatomic) long long realtimePushNeedSkip;
@property (nonatomic) long long lastInsertIndex;

+ (id)pitayaTrait;
+ (void)runPitayaTask:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)pitayaRunAtLoadmore:(BOOL)a0;
+ (id)realtimePushConfig;
+ (id)queryFirstSearchRecords;

- (void)clickWithRecord:(id)a0;
- (id)pitayaTaskParams:(id)a0;
- (id)queryActionRecords:(long long)a0;
- (id)impressionesWithTimestamp:(double)a0;
- (id)interactsWithTimestamp:(double)a0;
- (id)candidateItemList:(long long)a0;
- (void)resetRecordsForSession;
- (void)impressionWithMerchandise:(id)a0;
- (void)clickWithMerchandise:(id)a0 context:(id)a1;
- (void)impressionWithRecord:(id)a0;
- (id)impressionRecordWithDocID:(id)a0;
- (id)queryLoadMoreRecords:(id)a0;
- (void)resetRecords:(long long)a0;
- (void)updateQueryInfoWithQuery:(id)a0;
- (void)updateHasInsertDocInfo:(id)a0;
- (id)polymericHasInsertDocInfo;
- (void)buildupRealtimePush:(id)a0;
- (void)realtimePushOnceSkiped;
- (id)featureInfoWithSearchResultID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
