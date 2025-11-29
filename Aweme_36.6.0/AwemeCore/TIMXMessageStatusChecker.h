@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, TIMXMessageStoreProtocol;

@interface TIMXMessageStatusChecker : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton, TIMXMessageStatusCheckProtocol> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;
+ (id)notSentOrReceivedStatuses;
+ (id)splitDBIndexes;

- (void)checkSavedMessageStatus:(id)a0 withResponseBody:(id)a1;
- (void)checkSavedMessageStatus:(id)a0 withNewInsertMessage:(id)a1;
- (void)checkNotSendOrReceivedMessages;
- (id)getDbRowIdDict;
- (void)checkMessageStatusWithMsgInDBDict:(id)a0 msgRowIdDict:(id)a1 msgDBMaxRowIdDict:(id)a2 completion:(id /* block */)a3;
- (void)updateDBRowId:(id)a0 withDBIndex:(id)a1;
- (void)checkMessageStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (void)checkMessageStatusFromServer:(id)a0 WithConversationShortID:(long long)a1 completion:(id /* block */)a2;
- (void)updateDbRowIdDictWithMsg:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
