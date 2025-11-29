@class NSArray, NSMutableDictionary, NSString, NSMutableArray;

@interface AWEFeedDataSafeTableView : UITableView <AWEAwemeFeedBaseTableViewProtocol>

@property (nonatomic) long long beforeUpdateItemCount;
@property (retain, nonatomic) NSMutableArray *updateBatches;
@property (nonatomic) BOOL inUpdating;
@property (retain, nonatomic) NSMutableArray *awe_dequeuedCells;
@property (retain, nonatomic) NSArray *awe_blockedIdentifiers;
@property (nonatomic) long long awe_blockedType;
@property (retain, nonatomic) NSMutableDictionary *awe_cachedCells;
@property (nonatomic) BOOL awe_removeCellFromSuperviewWhenMemoryWarning;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isReused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportDataInconsistency:(id)a0;
- (void)awe_enableCellGuard:(BOOL)a0 cellCache:(BOOL)a1 blockType:(long long)a2 blockedArr:(id)a3;
- (void)awe_enqueueCell:(id)a0 withIdentifier:(id)a1;
- (id)awe_guardCellForRowAtIndexPath:(id /* block */)a0;
- (void)manuallyPurgeUnusedCells;
- (BOOL)checkForDataConsistencyWithIndexPath:(id)a0 andType:(long long)a1;
- (BOOL)tryCompensateIfInconsistency;
- (void)awe_purgeUnusedCells:(id)a0;
- (void)performPurgeUnusedCells;
- (id)safeIndexPaths:(id)a0 dataCount:(long long)a1;
- (void)beginUpdates;
- (void)endUpdates;
- (void).cxx_destruct;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void)scrollToRowAtIndexPath:(id)a0 atScrollPosition:(long long)a1 animated:(BOOL)a2;
- (void)insertRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (void)deleteRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (id)dequeueReusableCellWithIdentifier:(id)a0;
- (void)resetRecord;

@end
