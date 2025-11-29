@interface AWESearchAIGCBubbleTextView : UITextView

@property (copy, nonatomic) id /* block */ sendNewQueryBlock;
@property (copy, nonatomic) id /* block */ copyBlock;

- (void)searchAction;
- (void)copyAction;
- (void)setupCustomMenu;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end
