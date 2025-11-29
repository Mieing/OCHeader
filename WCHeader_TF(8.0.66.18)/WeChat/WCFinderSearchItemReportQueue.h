@class NSMutableSet, NSMutableArray;

@interface WCFinderSearchItemReportQueue : NSObject

@property (nonatomic) unsigned long long batchReportCount;
@property (retain, nonatomic) NSMutableSet *reportedItems;
@property (retain, nonatomic) NSMutableArray *pendingReportItems;
@property (nonatomic) long long lastReportExposeTimeInMs;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) unsigned long long reportSearchScene;

- (id)init;
- (void)removeAllObjects;
- (void)recardBeginExposeTimestamp;
- (void)recardContact:(id)a0 index:(long long)a1 reqId:(id)a2 text:(id)a3;
- (void)recardFeed:(id)a0 index:(long long)a1 reqId:(id)a2 text:(id)a3;
- (void)tryReport;
- (void)report;
- (void).cxx_destruct;

@end
