@class NSString;

@interface IESLLGXLRUNode : NSObject

@property (retain, nonatomic) id value;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) IESLLGXLRUNode *prev;
@property (retain, nonatomic) IESLLGXLRUNode *next;

- (id)initWithKey:(id)a0 Value:(id)a1;
- (void).cxx_destruct;

@end
