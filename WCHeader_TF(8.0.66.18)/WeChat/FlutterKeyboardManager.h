@class NSMutableArray;

@interface FlutterKeyboardManager : NSObject

@property (readonly, copy, nonatomic) NSMutableArray *primaryResponders;
@property (readonly, copy, nonatomic) NSMutableArray *secondaryResponders;

- (id)init;
- (void)addPrimaryResponder:(id)a0;
- (void)addSecondaryResponder:(id)a0;
- (void)handlePress:(id)a0 nextAction:(id /* block */)a1;
- (void)dispatchToSecondaryResponders:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
