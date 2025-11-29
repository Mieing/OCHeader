@protocol AWEIMMessageProtocol;

@interface AWEIMRedPacketQuoteReplyComponent : AWEIMDouyinRedPacketComponent

@property (retain, nonatomic) id<AWEIMMessageProtocol> originMessage;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_loadDetailMessageFrom:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;

@end
