@class NSArray, NSMutableDictionary, NSMutableSet, NSString, NSMutableArray;

@interface WCFinderFeedMediaCacheMgr : NSObject <WCFinderCacheDelegate>

@property (retain, nonatomic) NSMutableSet *tidSet;
@property (retain, nonatomic) NSArray *cacheStrategyList;
@property (retain, nonatomic) NSMutableDictionary *metricDict;
@property (copy, nonatomic) NSString *contextId;
@property (retain, nonatomic) NSMutableArray *watchList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)readMediaFileWithTid:(id)a0 fileSize:(unsigned long long)a1 commentScene:(int)a2;
- (void)report;
- (void)resetAll;
- (id)getCacheMetricsWithStratedy:(id)a0;
- (void)printExptLog;
- (void)cache:(id)a0 didEvictObject:(id)a1;
- (void).cxx_destruct;

@end
