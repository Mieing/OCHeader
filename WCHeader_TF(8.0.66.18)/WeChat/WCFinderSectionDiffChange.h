@class NSMutableArray;

@interface WCFinderSectionDiffChange : NSObject

@property (retain, nonatomic) NSMutableArray *items;

+ (id)makeIndexPath:(id)a0 rowIdxSet:(id)a1;
+ (id)toFinderDiff:(id)a0 sectionChanges:(id)a1 changeIndexSet:(id)a2;

- (void)applyInsertions:(id /* block */)a0 removals:(id /* block */)a1 reloads:(id /* block */)a2;
- (void)applyInsertions:(id /* block */)a0 removals:(id /* block */)a1 itemInsertions:(id /* block */)a2 itemRemovals:(id /* block */)a3;
- (void).cxx_destruct;

@end
