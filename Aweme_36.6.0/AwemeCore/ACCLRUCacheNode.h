@interface ACCLRUCacheNode : NSObject

@property (retain, nonatomic) id key;
@property (retain, nonatomic) id value;
@property (weak, nonatomic) ACCLRUCacheNode *previous;
@property (weak, nonatomic) ACCLRUCacheNode *next;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
