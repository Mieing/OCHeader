@class NSString, NSMutableDictionary, NSMutableArray;

@interface BDRETrieNode : NSObject

@property (copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSMutableDictionary *equalChildNodes;
@property (readonly, nonatomic) NSMutableArray *matchChildNodes;

- (id)constructEqualChildNodeWithKey:(id)a0;
- (void)addMatchChildNode:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end
