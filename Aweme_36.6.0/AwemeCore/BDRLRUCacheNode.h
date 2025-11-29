@interface BDRLRUCacheNode : NSObject

@property (weak, nonatomic) BDRLRUCacheNode *prev;
@property (weak, nonatomic) BDRLRUCacheNode *next;
@property (retain, nonatomic) id key;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;

@end
