@class AWEIMUnreadDotView, MASConstraint, UIView;

@interface AWEIMChatCellUnReadWrapperView : UIView

@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) AWEIMUnreadDotView *unreadView;
@property (nonatomic) long long type;
@property (nonatomic) long long unreadCount;
@property (retain, nonatomic) MASConstraint *dotConstraint;
@property (retain, nonatomic) MASConstraint *unreadConstraint;
@property (retain, nonatomic) MASConstraint *oldWidthConstraint;

- (double)p_adjustUnreadViewFontToMatchTabbar:(double)a0;
- (void)updatetype:(long long)a0 unreadCount:(long long)a1 enableMsgTabUIOpt:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
