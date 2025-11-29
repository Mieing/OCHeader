@class FMDatabaseQueue, TTTrackerCustomTable, NSSet;

@interface TTTrackerCustomEvent : NSObject

@property (retain, nonatomic) FMDatabaseQueue *databaseQueue;
@property (nonatomic) BOOL isSending;
@property (retain, nonatomic) TTTrackerCustomTable *table;
@property (retain, nonatomic) NSSet *unsupportTables;

+ (id)sharedInstance;

- (void)clearAllEventData;
- (void)collectCustomEvent:(id)a0 data:(id)a1;
- (id)allCustomEventsUsingOptions:(id)a0;
- (id)allCustomEvents;
- (void)onBatchEndWithResultSuccess:(BOOL)a0;
- (BOOL)shouldRebuildDatabase;
- (void)rebuildDatabase;
- (void)clearDatabaseErrorInfo;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)count;

@end
