@class NSArray, ToolbarPermutation_Rule, NSMutableDictionary, HTSLiveToolBarData, IESLiveToolbarTracker;

@interface IESLiveToolbarDataStrategy : NSObject

@property (retain, nonatomic) HTSLiveToolBarData *toolbarData;
@property (retain, nonatomic) ToolbarPermutation_Rule *verticalPermutation;
@property (retain, nonatomic) ToolbarPermutation_Rule *landscapePermutation;
@property (retain, nonatomic) ToolbarPermutation_Rule *permutation;
@property (nonatomic) unsigned long long maxCnt;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long customMaxSlotCount;
@property (retain, nonatomic) NSMutableDictionary *insertTrace;
@property (retain, nonatomic) NSMutableDictionary *removeTrace;
@property (retain, nonatomic) IESLiveToolbarTracker *tracker;

- (BOOL)containItemInSlot:(int)a0;
- (BOOL)containItem:(int)a0;
- (id)initWithToolbarData:(id)a0 diContext:(id)a1;
- (void)logEvent:(id)a0 fileName:(const char *)a1 functionName:(const char *)a2 line:(int)a3 extra:(id)a4;
- (id)removeLowPrioritySlotIfNeed:(id)a0 insertItem:(id)a1;
- (id)monitorInsertTrace;
- (id)monitorRemoveTrace;
- (unsigned long long)maxSlotCnt;
- (id)sortSequenceItems:(id)a0;
- (void)trackInsertItem:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)orientationChanged:(long long)a0;
- (void)removeItem:(int)a0;
- (void)insertItem:(id)a0;
- (BOOL)isFull;

@end
