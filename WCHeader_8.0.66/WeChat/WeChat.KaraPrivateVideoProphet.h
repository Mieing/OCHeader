@interface WeChat.KaraPrivateVideoProphet : WeChat.KaraProphetModule <WeChat.IKaraFeatureCenterPrivateVideo>

- (void)message:(id)a0 receivedAt:(id)a1;
- (void)message:(id)a0 recalledAt:(id)a1;
- (void)message:(id)a0 preparedAt:(id)a1;
- (void)messageRevoked:(id)a0;

@end
