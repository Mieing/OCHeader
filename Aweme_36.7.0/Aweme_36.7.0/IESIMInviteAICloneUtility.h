@class NSString;

@interface IESIMInviteAICloneUtility : NSObject <IESIMInviteAICloneUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateManageAICloneViewControllerWithConversation:(id)a0 trackParams:(id)a1;
+ (id)generateAddAICloneViewControllerWithConversation:(id)a0 trackParams:(id)a1;
+ (id)userRoleWithConversation:(id)a0;
+ (BOOL)canManageAICloneWithConversation:(id)a0;
+ (BOOL)canRemoveAICloneWithConversation:(id)a0;
+ (void)requestAICloneListForConversationShortID:(long long)a0 cursor:(id)a1 count:(long long)a2 enterFrom:(id)a3 enterMethod:(id)a4 completion:(id /* block */)a5;
+ (id)viewModelWithItemResponseModel:(id)a0;
+ (id)viewModelWithBotModel:(id)a0 userModel:(id)a1 creatorUserModel:(id)a2 buttonTitle:(id)a3;
+ (id)halfScreenAddAICloneViewControllerWithConversation:(id)a0 trackParams:(id)a1;
+ (void)handleDataDict:(id)a0 duration:(unsigned long long)a1 convShortID:(long long)a2 error:(id)a3 completion:(id /* block */)a4;
+ (void)getDataDictCacheWithKeySuffix:(id)a0 completion:(id /* block */)a1;
+ (void)p_trackNetworkWithScene:(id)a0 conversationID:(id)a1 errorReason:(id)a2 success:(BOOL)a3 requestDuration:(long long)a4;
+ (void)cacheDataDict:(id)a0 withKeySuffix:(id)a1;


@end
