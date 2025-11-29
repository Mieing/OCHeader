@class NSString, NSHashTable, AWELiveVSMessageManager, IESLiveDataSyncManager;

@interface AWELiveVSMessageActionCreator : IESLiveIMBaseActionCreator <HTSLiveMessageSubscriber, IESLiveDataSyncDelegate>

@property (weak, nonatomic) AWELiveVSMessageManager *dispatcherManager;
@property (retain, nonatomic) IESLiveDataSyncManager *wrdsManager;
@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (nonatomic) BOOL isCallingStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)updateDispatcherManager:(id)a0;
- (void)realStart;
- (id)setupIMDispatcherWithConfig:(id)a0;
- (void)startAll;
- (id)decideReceiver;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)stopAll;
- (void)messageReceived:(id)a0;

@end
