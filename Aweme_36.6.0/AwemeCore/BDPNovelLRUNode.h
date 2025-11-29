@interface BDPNovelLRUNode : NSObject

@property (weak, nonatomic) BDPNovelLRUNode *prev;
@property (weak, nonatomic) BDPNovelLRUNode *next;
@property (retain, nonatomic) id key;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;

@end
