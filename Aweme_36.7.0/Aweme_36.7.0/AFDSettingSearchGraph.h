@class NSDictionary, NSOperation;

@interface AFDSettingSearchGraph : NSObject

@property (copy, nonatomic) NSDictionary *settingItems;
@property (retain, nonatomic) NSOperation *operation;

- (id)p_uniqueIdentifer:(id)a0;
- (id)p_neighbors:(id)a0;
- (void)buildDualStack:(id)a0 mainStack:(id)a1 neighborStack:(id)a2 visited:(id)a3;
- (void)cutdownDualStack:(id)a0 neighborStack:(id)a1 visited:(id)a2;
- (id)dfs_findAllPath:(id)a0;
- (void).cxx_destruct;

@end
