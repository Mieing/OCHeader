@class TIMXCommandMessageManager, NSMutableDictionary, NSString, TIMXSDKInstance, TIMXGCDTimer, NSObject, NSMutableArray;
@protocol TIMXCurrentUserCredentialProtocol, TIMXAppMessageInsertPluginProtocol, TIMXMessageStoreProtocol, OS_dispatch_queue;

@interface TIMXPullerInserter : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *doNotInsertIndexBeforeThis;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> user;
@property (nonatomic) BOOL enableMeasureMarkReadCommand;
@property (nonatomic) long long markReadExceptionDuration;
@property (nonatomic) BOOL enableTemporaryDropOldMarkReadCommand;
@property (nonatomic) BOOL cmdChecked;
@property (retain, nonatomic) NSMutableArray *cmdIndexRanges;
@property (retain, nonatomic) NSMutableArray *cmdIndexs;
@property (nonatomic) long long previousCheckedIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cmdIntegrityQueue;
@property (retain, nonatomic) TIMXGCDTimer *cmdIntegrityTimer;
@property (retain, nonatomic) NSMutableArray *aggregatedCommandMessages;
@property (retain, nonatomic) TIMXGCDTimer *getInfoAggregateTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *getInfoAggregateQueue;
@property (readonly, nonatomic) id<TIMXAppMessageInsertPluginProtocol> p_appProcessor;
@property (retain, nonatomic) TIMXCommandMessageManager *commandMessageManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userDidLogout:(id)a0;
- (long long)insertMessagesBatch:(id)a0 conversationExtraMap:(id)a1 inInbox:(int)a2 reason:(id)a3 context:(id)a4 completion:(id /* block */)a5;
- (long long)insertMessages:(id)a0 conversationExtraMap:(id)a1 inInbox:(int)a2 reason:(id)a3 context:(id)a4 completion:(id /* block */)a5;
- (void)handleCommandMessage:(id)a0 inInbox:(int)a1 reason:(id)a2;
- (BOOL)isCommandMessage:(id)a0;
- (BOOL)validateMessage:(id)a0 reason:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
