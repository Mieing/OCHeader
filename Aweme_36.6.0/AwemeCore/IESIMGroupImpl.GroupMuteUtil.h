@interface IESIMGroupImpl.GroupMuteUtil : NSObject <IESIMGroupMuteUtil>

- (BOOL)isFoldWithConversation:(id)a0;
- (void)setMuteMasks:(long long)a0 forConversation:(id)a1 completion:(id /* block */)a2;
- (void)setFold:(BOOL)a0 forConversation:(id)a1 completion:(id /* block */)a2;
- (long long)muteSettingsMaskOfConversation:(id)a0;
- (void)checkIsEnableSwitchToUnmuteForConversation:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
