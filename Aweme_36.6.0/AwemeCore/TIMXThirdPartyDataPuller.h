@class NSString, TIMXSDKInstance, TIMXGCDTimer, NSObject, TIMXPBResponseLongConnectionCallback;
@protocol OS_dispatch_queue, TIMXKVStorageProtocol;

@interface TIMXThirdPartyDataPuller : NSObject <TIMXThirdPartyEventProtocol, TIMXThirdPartyDataPullerProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (nonatomic) int bizId;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (nonatomic) BOOL isFetching;
@property unsigned long long thirdPartyInitStatus;
@property (copy, nonatomic) NSString *thirdPartyInitStatusKey;
@property (copy, nonatomic) NSString *thirdPartyInitVersionKey;
@property (nonatomic) long long thirdPartyVersion;
@property (copy, nonatomic) NSString *thirdPartyVersionKey;
@property (copy, nonatomic) NSString *maxMsgCreateAtKey;
@property BOOL needsPullOfflineMessage;
@property BOOL pullingOfflineMessage;
@property (retain) TIMXGCDTimer *offlineMessagePullTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *offlineMessagePullQueue;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *notifyNewMessageCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInit;
- (BOOL)hasInited;
- (void)setNeedsPullWithContext:(id)a0;
- (void)resetInitPuller;
- (void)didReceiveMaxMessageCreatedAt:(id)a0 bizId:(int)a1 inbox:(int)a2;
- (void)offlineMessagePullFired:(id)a0;
- (void)pullOfflineMessageDirection:(unsigned long long)a0 context:(id)a1;
- (void)setupKeys;
- (void)configLongConnectionCallback;
- (unsigned long long)readThirdPartyInitStatus;
- (long long)readThirdPartyVersion;
- (void)setThirdPartyInitStatusAndSave:(unsigned long long)a0;
- (long long)readThirdPartyInitVersion;
- (void)handleInitFetchSuccesses:(id)a0 version:(long long)a1;
- (void)handleInitFetchFailed:(id)a0;
- (void)setThirdPartyVersionAndSave:(long long)a0;
- (void)saveThirdPartyInitVersion:(long long)a0;
- (void)handlePullOfflineMessageSuccesses:(id)a0 job_id:(unsigned int)a1 context:(id)a2;
- (void)handPullOfflineMessageFailed:(id)a0 job_id:(unsigned int)a1 context:(id)a2;
- (void)handleNewMessageNotify:(id)a0;
- (void)handleNotifyEvent:(id)a0;
- (id)maxMsgCreateAt;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 bizId:(int)a2 userID:(long long)a3;
- (void).cxx_destruct;
- (void)kickoff;
- (BOOL)isValidVersion:(long long)a0;
- (void)initWithVersion:(long long)a0;

@end
