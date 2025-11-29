@class AWEIMChatRoomInviteMessageProps, AWEIMRTVInviteCardView;

@interface AWEIMChatRoomInviteMessageView : UIView

@property (retain, nonatomic) AWEIMChatRoomInviteMessageProps *props;
@property (retain, nonatomic) AWEIMRTVInviteCardView *inviteCardView;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
