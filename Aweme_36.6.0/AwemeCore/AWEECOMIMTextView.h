@interface AWEECOMIMTextView : UITextView

@property (copy, nonatomic) id /* block */ pasteBlock;
@property (nonatomic) BOOL disableSystemMenu;

- (void)setDisableSystemGestures;
- (BOOL)canBecameFirstResponder;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (void)cut:(id)a0;
- (void)paste:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end
