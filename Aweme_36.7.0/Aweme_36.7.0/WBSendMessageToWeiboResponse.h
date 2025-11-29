@class WBAuthorizeResponse;

@interface WBSendMessageToWeiboResponse : WBBaseResponse

@property (retain, nonatomic) WBAuthorizeResponse *authResponse;

- (void)storeToDictionary:(id)a0;
- (BOOL)canBeReceived;
- (void).cxx_destruct;
- (BOOL)canBeSent;
- (void)loadFromDictionary:(id)a0;

@end
