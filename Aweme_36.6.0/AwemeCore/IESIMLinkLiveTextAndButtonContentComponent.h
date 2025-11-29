@interface IESIMLinkLiveTextAndButtonContentComponent : IESIMTextAndButtonContentComponent

- (void)trackJoinButtonClick;
- (id)p_inactiveButtonPropsWithTitle:(id)a0;
- (id)p_buttonPropsForReceiverWithType:(unsigned long long)a0;
- (id)p_activeButtonPropsWithTitle:(id)a0;
- (id)buttonProps;
- (id)message;
- (void)buttonTapped;

@end
