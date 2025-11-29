@protocol WCPayVoidCallbackDelegate;

@interface WCPayVoidCallback : MMVoidCallback

@property (weak) id<WCPayVoidCallbackDelegate> m_delegate;
@property (retain) id m_userInfo;

- (id)initWithDelegate:(id)a0 userInfo:(id)a1;
- (void)call;
- (void).cxx_destruct;

@end
