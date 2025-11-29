@class NSString;

@interface AWEOFGIM : HTSService <AWEOFGIM>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)joinGroupChatWithBizExt:(id)a0 sourceType:(long long)a1 enterFrom:(id)a2 trackDictionary:(id)a3 completion:(id /* block */)a4 ofgClientKey:(id)a5 ofgAppID:(id)a6 ofgError:(id *)a7;
+ (BOOL)joinConversation:(id)a0 shortId:(long long)a1 bizExtension:(id)a2 completion:(id /* block */)a3 ofgClientKey:(id)a4 ofgAppID:(id)a5 ofgError:(id *)a6;
+ (BOOL)openTransferToAppInternalVCWithContext:(id)a0 authorShareNotPublicAweme:(BOOL)a1 enterMethod:(id)a2 multiSelectedItems:(id)a3 replayContent:(id)a4 ofgClientKey:(id)a5 ofgAppID:(id)a6 ofgError:(id *)a7;
+ (BOOL)transferToFullScreenAllFriendsListWithInviteBlock:(id /* block */)a0 dismissFinishBlock:(id /* block */)a1 disableToast:(BOOL)a2 ofgClientKey:(id)a3 ofgAppID:(id)a4 ofgError:(id *)a5;
+ (id)userWithSecUid:(id)a0 ofgClientKey:(id)a1 ofgAppID:(id)a2 ofgError:(id *)a3;
+ (BOOL)sendMessageWithParams:(id)a0 completionBlock:(id /* block */)a1 ofgClientKey:(id)a2 ofgAppID:(id)a3 ofgError:(id *)a4;


@end
