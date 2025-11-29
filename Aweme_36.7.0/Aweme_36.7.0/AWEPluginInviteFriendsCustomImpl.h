@class NSString;

@interface AWEPluginInviteFriendsCustomImpl : NSObject <BDPInvitePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)schemaWithInviteModel:(id)a0;
- (BOOL)parseCallingServerResponse:(id)a0;
- (void)bdp_inviteFriendsPanelWithModel:(id)a0 createCallback:(id /* block */)a1 dismissCallback:(id /* block */)a2 actionCallback:(id /* block */)a3;

@end
