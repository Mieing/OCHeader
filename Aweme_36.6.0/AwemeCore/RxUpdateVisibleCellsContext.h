@class NSMutableArray, NSMutableIndexSet;

@interface RxUpdateVisibleCellsContext : NSObject {
    long long _visibleCellsRefCount;
}

@property (readonly, nonatomic) NSMutableArray *indexPaths;
@property (readonly, nonatomic) NSMutableArray *sizes;
@property (readonly, nonatomic) NSMutableIndexSet *sectionIndexes;
@property (readonly, nonatomic) NSMutableArray *attributes;

- (void)didEntryVisibleCellPass;
- (void)didLeaveVisibleCellPass;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)shouldInvalidate;
- (BOOL)hasLeftVisibleCellsPass;
- (void)addPreferredAttributes:(id)a0;

@end
