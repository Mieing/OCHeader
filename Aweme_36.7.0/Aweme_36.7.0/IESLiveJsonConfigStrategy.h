@class NSMutableDictionary, NSArray, IESLiveToolbarSlotConfig, IESLiveToolbarTracker;

@interface IESLiveJsonConfigStrategy : NSObject

@property (retain, nonatomic) IESLiveToolbarSlotConfig *configuration;
@property (nonatomic) unsigned long long customMaxSlotCount;
@property (retain, nonatomic) NSMutableDictionary *insertTrace;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) IESLiveToolbarTracker *tracker;

- (BOOL)containItem:(id)a0;
- (void)insertItem:(id)a0 asExtendedFor:(id)a1;
- (id)findItem:(id)a0;
- (unsigned long long)indexForSlot:(id)a0;
- (id)initWithConfigFile:(id)a0 diContext:(id)a1;
- (void)logEvent:(id)a0 fileName:(const char *)a1 functionName:(const char *)a2 line:(int)a3 extra:(id)a4;
- (void)trackAddItem:(id)a0 withIdx:(long long)a1;
- (id)removeLowPrioritySlotIfNeed:(id)a0 insertItem:(id)a1;
- (unsigned long long)isContainsItem:(id)a0 items:(id)a1;
- (id)slotForItem:(id)a0;
- (id)monitorInsertTrace;
- (void).cxx_destruct;
- (void)insertItem:(id)a0;
- (BOOL)isFull;

@end
