@class NSString;

@interface AWEIMEntryServiceChatService : HTSService <AWEIMEntryServiceChatService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceBRoleIDsWhiteList;
- (id)serviceCRoleIDsWhiteList;
- (id)serviceAllRoleIDsWhiteList;
- (BOOL)isServiceBussinessRole:(id)a0;
- (BOOL)isServiceBussinessRoleIDs:(id)a0;
- (BOOL)isCServiceChatRole:(id)a0;
- (BOOL)isCServiceChatRoleWithRoleIds:(id)a0;

@end
