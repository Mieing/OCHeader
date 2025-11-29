@class NSArray;

@interface BDRETrieOpGraphNodeBuilder : BDREGraphNodeBuilder

@property (readonly, nonatomic) NSArray *regexWords;

- (id)innerBuildNodeWithGraph:(id)a0 treeNode:(id)a1 index:(long long)a2;
- (BOOL)maybeRegexStr:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
