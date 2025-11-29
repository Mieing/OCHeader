@class NSString, AWEAwemeModel, AWELivePreStreamMessageManager, AWELivePreStreamMSequenceMessageDispatcher, IESLiveIMPaaSWorker;
@protocol IESLiveRoomService;

@interface AWELivePreStreamMSequenceMessageCreator : NSObject <IESLiveIMMessageSubscriber, AWELivePreStreamMSequenceDataSyncProvider>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) long long mSequenceRoomId;
@property (retain, nonatomic) AWELivePreStreamMSequenceMessageDispatcher *dispatcher;
@property (retain, nonatomic) IESLiveIMPaaSWorker *worker;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWELivePreStreamMessageManager *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithModel:(id)a0;
- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (id)syncDataClsNames;
- (id)syncDataClassNameStrings;
- (void)p_setupIMConfig;
- (void)stopIMWorker;
- (void)startIMWorkerWith:(long long)a0 subscriber:(id)a1;
- (void)p_fetchRoomInfoWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)messageReceived:(id)a0;

@end
