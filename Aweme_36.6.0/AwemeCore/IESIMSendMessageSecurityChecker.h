@class NSArray, NSMutableArray, NSString;

@interface IESIMSendMessageSecurityChecker : NSObject

@property (retain, nonatomic) NSMutableArray *sessionIDStack;
@property (nonatomic) long long cachedCheckScene;
@property (copy, nonatomic) NSArray *cachedSessionIds;
@property (copy, nonatomic) NSString *cachedToken;

+ (id)sharedInstance;

- (void)notifyDirectedSendMessageWithSessionIds:(id)a0 enterFrom:(id)a1;
- (void)notifyNonDirectedSendMessageWithEnterFrom:(id)a0;
- (void)notifyDirectedSendMessageWithUids:(id)a0 enterFrom:(id)a1;
- (void)notifyConversationDidDisappearWithSessionID:(id)a0;
- (void)notifyConversationDidLoadWithSessionID:(id)a0;
- (BOOL)trackNotSecurityCheckScene:(id)a0;
- (void)securityCheckWithSessionID:(id)a0 context:(id)a1;
- (void)securityCheckWithSessionID:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)p_checkDirectedSendingWithSessionID:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)p_checkNonDirectedSendingWithSessionID:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)reportToQAWithStackTopSessionID:(id)a0 context:(id)a1 realSendSessionId:(id)a2;
- (void)clearCachedSessionID:(id)a0;
- (void).cxx_destruct;

@end
