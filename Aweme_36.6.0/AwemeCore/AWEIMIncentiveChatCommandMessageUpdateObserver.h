@class NSString;
@protocol IESIMIncentiveChatCommandMsgNotifierProtocol;

@interface AWEIMIncentiveChatCommandMessageUpdateObserver : NSObject <IESIMCoreServiceFactoryMessage, IESIMIncentiveChatCommandMsgNotifierDelegate>

@property (retain, nonatomic) id<IESIMIncentiveChatCommandMsgNotifierProtocol> commandMsgNotifier;
@property (nonatomic) BOOL canRegisterAfterColdStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)iesim_didReceiveIncentiveChatCommandMessage:(id)a0;
- (void)iesim_didFinishCoreServiceFactoryCreate;
- (void)rerouteWithMessage:(id)a0 loginUid:(id)a1 serverPushTime:(double)a2;
- (void)p_handleRelationReloadMessage:(id)a0 loginUid:(id)a1 serverPushTime:(double)a2;
- (void)handleChatProgressData:(id)a0 loginUid:(id)a1 serverPushTime:(double)a2;
- (void)handleChatActivationData:(id)a0 loginUID:(id)a1 serverPushTime:(double)a2;
- (void)handleActivityExitData:(id)a0;
- (void)p_registerCommandMsgNotifier;
- (void)handleQuotaUpdateData:(id)a0;
- (void)registerCmdObserver;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
