@class UIColor, NSDictionary, AWEIMMessage;

@interface AWEIMChatRoomInviteMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UIColor *BGColor;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) AWEIMMessage *message;

- (void).cxx_destruct;

@end
