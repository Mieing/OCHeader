@class NSMutableDictionary, NSMutableArray;

@interface BDREDiGraph : NSObject

@property (retain, nonatomic) NSMutableDictionary *outputNodeMap;
@property (retain, nonatomic) NSMutableDictionary *trieNodeMap;
@property (retain, nonatomic) NSMutableArray *entryNodes;
@property (retain, nonatomic) NSMutableArray *outNodes;
@property (retain, nonatomic) NSMutableArray *fallBackRuleModels;
@property (retain, nonatomic) NSMutableArray *defaultOutputNodes;

- (id)travelWithParams:(id)a0 needBreak:(BOOL)a1;
- (BOOL)hasTrieNode;
- (id)getOutputNodeWithValue:(id)a0;
- (void)addFallBackRuleModel:(id)a0;
- (void)addCommandTree:(id)a0 index:(long long)a1 outputValue:(id)a2 ruleModel:(id)a3;
- (id)getEntryNodeWithIdentifier:(id)a0;
- (id)getConstNodeWithValue:(id)a0;
- (void)addOutGraphNode:(id)a0;
- (id)getTrieNodeWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
