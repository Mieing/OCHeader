@class NSString;

@interface AWEPigeonSendGameInvitationImpl : NSObject <AWEIronManPigeonProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pigeonMethodName;
+ (id)create;

- (void)callMethod:(id)a0 arguments:(id)a1 completion:(id /* block */)a2;
- (id)jsonStringForError:(id)a0;
- (void)sendGameInvitationWithOpenId:(id)a0 clientKey:(id)a1 gameName:(id)a2 coverImg:(id)a3 schema:(id)a4 linkId:(id)a5 shareVersion:(id)a6 conversationId:(id)a7 extra:(id)a8 imCardData:(id)a9 completion:(id /* block */)a10;
- (void)errorCallbackWithCompletion:(id /* block */)a0;
- (void)sendGameInvitationToPrivateChatWithOpenId:(id)a0 clientKey:(id)a1 gameName:(id)a2 coverImg:(id)a3 schema:(id)a4 linkId:(id)a5 shareVersion:(id)a6 extra:(id)a7 imCardData:(id)a8 completion:(id /* block */)a9;
- (void)sendGameInvitationToGroupChatWithGameName:(id)a0 coverImg:(id)a1 schema:(id)a2 linkId:(id)a3 shareVersion:(id)a4 conversationId:(id)a5 extra:(id)a6 imCardData:(id)a7 completion:(id /* block */)a8;

@end
