@interface AWENearbyLRUCacheNode : NSObject

@property (weak, nonatomic) AWENearbyLRUCacheNode *prev;
@property (weak, nonatomic) AWENearbyLRUCacheNode *next;
@property (retain, nonatomic) id key;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;

@end
