@class NSDictionary, CMStack, NSMutableArray;

@interface CMCascadingAttributeStack : NSObject {
    CMStack *_stack;
    NSMutableArray *_cascadedAttributes;
}

@property (readonly, nonatomic) NSDictionary *cascadedAttributes;

- (void)pushAttributes:(id)a0;
- (void)pushOrderedListAttributes:(id)a0 withStartingNumber:(long long)a1;
- (id)attributesWithDepth:(unsigned long long)a0;
- (void)pop;
- (id)peek;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
