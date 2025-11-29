@class UIButton;

@interface AWEUserButtonState : BDStateMachineState

@property (readonly) UIButton *button;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ accessibilityClickBlock;
@property (copy, nonatomic) id /* block */ customRefreshButtonBlock;

+ (id)stateWithID:(id)a0 enterBlock:(id /* block */)a1 leaveBlock:(id /* block */)a2 clickBlock:(id /* block */)a3;

- (void)refreshWithTitle:(id)a0 isAttention:(BOOL)a1;
- (void)refreshWithTitle:(id)a0 image:(id)a1 padding:(double)a2 isAttention:(BOOL)a3;
- (void)refreshWithTitle:(id)a0 image:(id)a1 isAttention:(BOOL)a2;
- (void)updateAccessibilityName:(id)a0;
- (void)accessibilityClick;
- (void).cxx_destruct;
- (void)click;

@end
