@interface LynxLRUNode : NSObject

@property (weak, nonatomic) id key;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) LynxLRUNode *prev;
@property (retain, nonatomic) LynxLRUNode *next;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
