@class NSString;

@interface IESIMOverseaUserConfigService : HTSService <IESIMOverseaUserConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)overseaUserDiffEnable;
- (BOOL)onlyShowBasicMessageFunctionWithCon:(id)a0 peerUser:(id)a1;
- (BOOL)shouldDisableIMFunction;
- (BOOL)shouldForbidReceiveNewMessage;
- (BOOL)shouldForbidReceiveNewMessageForUser:(id)a0;
- (BOOL)onlyShowBasicMessageFunctionForConversation:(id)a0;
- (BOOL)__isOverseaIMUser:(id)a0;
- (BOOL)__isOverseaAWEUser:(id)a0;

@end
