@class MMLRUCache, NSMutableDictionary, MMTimer;
@protocol WCFinderPreFetchObjectMgrDelegate;

@interface WCFinderPreFetchObjectMgr : NSObject

@property (retain, nonatomic) MMLRUCache *feedPreFetchValidityPeriodCache;
@property (retain, nonatomic) NSMutableDictionary *feedRequestDict;
@property (retain, nonatomic) MMTimer *requestTimer;
@property (weak, nonatomic) id<WCFinderPreFetchObjectMgrDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)preFetchDataItemWithTid:(id)a0 exportId:(id)a1 nonceID:(id)a2 scene:(int)a3;
- (void)addPrefetchObject:(id)a0 scene:(int)a1;
- (void)startRequest;
- (void)checkAndStarRequest;
- (void)updateDataItemPreFetchTime:(id)a0 validityPeriod:(unsigned long long)a1;
- (BOOL)dataItemCanPreFetchWithId:(id)a0;
- (void).cxx_destruct;

@end
