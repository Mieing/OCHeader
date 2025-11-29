@class NSDictionary, AWEIMUser, AWEUserModel;

@interface IESIMChatSettingsComponentContext : IESIMChatSettingsBaseComponentContext

@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) BOOL isStranger;
@property (nonatomic) BOOL isPigeon;
@property (retain, nonatomic) AWEIMUser *peerUser;
@property (retain, nonatomic) AWEUserModel *fullDetailPeerUser;

- (void)updateUserStatusWithCompleteBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
