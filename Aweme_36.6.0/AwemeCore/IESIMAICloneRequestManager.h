@interface IESIMAICloneRequestManager : NSObject

+ (id)toastTextForResponse:(id)a0 error:(id)a1;
+ (BOOL)p_alreadyExistInConvOfCheckMessage:(id)a0 botID:(long long)a1;
+ (id)sharedManager;

- (void)removeAIClone:(long long)a0 inConversation:(id)a1 completion:(id /* block */)a2;
- (void)bookAIClone:(long long)a0 proactive:(BOOL)a1 convShortID:(long long)a2 completion:(id /* block */)a3;
- (void)p_publishEvent:(long long)a0 botID:(long long)a1 success:(BOOL)a2;
- (void)p_trackNetworkWithScene:(id)a0 conversationID:(id)a1 perm:(BOOL)a2 botID:(long long)a3 errorReason:(id)a4 success:(BOOL)a5 requestDuration:(long long)a6;
- (void)addAIClone:(long long)a0 toConversation:(id)a1 proactive:(BOOL)a2 enterFrom:(id)a3 enterMethod:(id)a4 completion:(id /* block */)a5;
- (void)updateAIClone:(long long)a0 proactive:(BOOL)a1 inConversation:(id)a2 completion:(id /* block */)a3;

@end
