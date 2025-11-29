@class NSMutableDictionary, TIMXSDKInstance, NSString, NSObject, NSCache;
@protocol OS_dispatch_semaphore;

@interface TIMXSendMessageTracker : NSObject <TIMXSendMessageEventProtocol>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (retain, nonatomic) NSCache *messageContextCache;
@property (retain, nonatomic) NSMutableDictionary *logInfoMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackMsgSendStart:(id)a0;
- (void)trackMsgSend:(id)a0 responseObj:(id)a1 error:(id)a2;
- (void)didInsertMessageWithMessage:(id)a0 messageTemplate:(id)a1 isNoSaveDB:(BOOL)a2;
- (void)willSendMessageWithMessageID:(id)a0 conversationID:(id)a1;
- (void)didSendMessageWithMessage:(id)a0 saveDB:(BOOL)a1 error:(id)a2;
- (id)getLogInfoForMessageIdentify:(id)a0;
- (void)logStartTime:(id)a0;
- (id)contextKeyWithMessageID:(id)a0 conversationID:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
