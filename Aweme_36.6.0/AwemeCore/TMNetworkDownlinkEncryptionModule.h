@interface TMNetworkDownlinkEncryptionModule : TMModule

- (void)startSubscribers;
- (id)encryptionModuleConfig;
- (void)start;

@end
