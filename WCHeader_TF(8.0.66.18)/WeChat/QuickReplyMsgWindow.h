@protocol QuickReplyMsgWindowDelegate;

@interface QuickReplyMsgWindow : MMUIWindow

@property (weak, nonatomic) id<QuickReplyMsgWindowDelegate> delegate;

- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
