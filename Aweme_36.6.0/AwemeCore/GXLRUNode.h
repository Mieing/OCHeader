@class NSString;

@interface GXLRUNode : NSObject

@property (retain, nonatomic) id value;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) GXLRUNode *prev;
@property (retain, nonatomic) GXLRUNode *next;

- (id)initWithKey:(id)a0 Value:(id)a1;
- (void).cxx_destruct;

@end
