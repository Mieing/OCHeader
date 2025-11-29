@class NSString;
@protocol IESLiveIMMessageReciever, IESLiveIMPaaSClient, IESLiveDataSyncService, IESLiveIMMessageDispatchProvider;

@interface IESLiveIMPaaSWorker : NSObject <IESLiveIMPaaSWorker, IESLiveIMClientDataReceiver>

@property (retain, nonatomic) id<IESLiveDataSyncService> wrdsManager;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> messageFirstReceiver;
@property (nonatomic) long long bizUniqueToken;
@property (nonatomic) double totalDecodedTS;
@property (nonatomic) long long totalPacketCount;
@property (retain, nonatomic) id<IESLiveIMPaaSClient> client;
@property (retain, nonatomic) id<IESLiveIMMessageDispatchProvider> dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)registerWith:(id)a0;
- (void)didRecievePacket:(id)a0;
- (void)startDispatch;
- (void)stopDispatch;
- (void)startReplay;
- (void)stopReplay;
- (id)initWith:(id)a0 wrdsManager:(id)a1 dispatcher:(id)a2;
- (void)trackDataDecodingTime;
- (void)collectDataDecodingTime:(id)a0;
- (void)reconnect;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)initWith:(id)a0;
- (void)unregisterWith:(id)a0;

@end
