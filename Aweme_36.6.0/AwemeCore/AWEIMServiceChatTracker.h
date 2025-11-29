@class NSString;

@interface AWEIMServiceChatTracker : NSObject <IESIMServiceChatTrackerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleServiceDOUYINLGAdapterClass;
+ (id)serviceChatTrackersWithToUser:(id)a0 conversationID:(id)a1;
+ (id)serviceChatRoleInfoForToUser:(id)a0;
+ (void)trackEventName:(id)a0 conversation:(id)a1 extra:(id)a2;
+ (id)serviceChatRoleInfoForIESConversation:(id)a0;
+ (id)serviceChatTrackersWithToUser:(id)a0 conversation:(id)a1;
+ (id)messageTabServiceChatTracker;
+ (void)addLifeAccountParams:(id)a0 peerUser:(id)a1;
+ (id)chatListBtmSourceToken:(id)a0 messageIndex:(id)a1;
+ (BOOL)isServicePrivateWithPeerUserRoleIds:(id)a0 currentUserRoleIds:(id)a1;
+ (void)addServicePrivateChatUserParamsFromTracker:(id)a0 peerUser:(id)a1 currentUser:(id)a2;
+ (void)addCommonParamsWithParams:(id)a0;

- (id)aAWEMainModuleServiceDOUYINLGAdapter;

@end
