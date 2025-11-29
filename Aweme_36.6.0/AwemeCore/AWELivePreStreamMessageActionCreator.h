@class AWELivePreStreamMSequenceMessageCreator, NSString, AWEAwemeModel, AWELivePreStreamMessageManager, IESLiveDataSyncManager, NSHashTable;

@interface AWELivePreStreamMessageActionCreator : IESLiveIMBaseActionCreator <HTSLiveMessageSubscriber, IESLiveDataSyncDelegate>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELivePreStreamMessageManager *dispatcherManager;
@property (retain, nonatomic) IESLiveDataSyncManager *wrdsManager;
@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (nonatomic) BOOL isCallingStart;
@property (nonatomic) BOOL mSequenceSubMessageSwitch;
@property (retain, nonatomic) AWELivePreStreamMSequenceMessageCreator *mSequenceSubCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)updateAwemeModel:(id)a0;
- (void)updateDispatcherManager:(id)a0;
- (id)initWithDIContext:(id)a0 config:(id)a1;
- (void)updateLiveDataBy:(id)a0;
- (void)setupMSequenceCreator;
- (void)realStart;
- (void)cleanupMSequenceCreator;
- (id)setupIMDispatcherWithConfig:(id)a0;
- (void)startAll;
- (void)updateNtpDiffTime:(long long)a0;
- (id)decideReceiver;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAll;
- (void)messageReceived:(id)a0;

@end
