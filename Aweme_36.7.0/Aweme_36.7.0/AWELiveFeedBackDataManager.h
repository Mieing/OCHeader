@class NSString, NSDate;

@interface AWELiveFeedBackDataManager : NSObject <AWEUserFeedbackManagerProtocol>

@property (retain, nonatomic) NSDate *lastUploadAlogDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedbackCommonAdapterClass;
+ (id)sharedInstance;

- (id)appKey;
- (void)registerByteSync;
- (void)uploadImage:(id)a0 completion:(id /* block */)a1;
- (void)logAppState;
- (void)uploadALogsWithCompletion:(id /* block */)a0;
- (id)aAWEFeedbackCommonAdapter;
- (id)adAppKey;
- (void)p_logAppState;
- (int)userFeedbackByteSyncBusinessID;
- (void)__onByteSyncMessage:(id)a0;
- (void)__uploadAlogTicket:(id)a0;
- (void)__cloneExprTicket:(id)a0;
- (void)__onFinishUpload:(id)a0 ticketInfo:(id)a1;
- (void)__postTicketInfo:(id)a0 onComplete:(id /* block */)a1;
- (void)checkIfNewMessageWithHeaders:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
