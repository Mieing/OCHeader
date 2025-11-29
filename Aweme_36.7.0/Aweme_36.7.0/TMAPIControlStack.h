@class NSMutableArray;

@interface TMAPIControlStack : NSObject

@property (retain, nonatomic) NSMutableArray *stack;

- (id)pop;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (id)allItems;
- (BOOL)isEmpty;
- (id)init;

@end
