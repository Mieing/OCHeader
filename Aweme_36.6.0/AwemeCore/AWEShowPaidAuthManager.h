@class BDXBridgeEventSubscriber, NSObject, NSString, AWEAwemeModel, NSHashTable, NSMutableArray, IESLiveIMPaaSWorker;
@protocol OS_dispatch_queue;

@interface AWEShowPaidAuthManager : NSObject <IESLiveIMMessageSubscriber, AWEPlayletPaymentMessage, AWEShowPaidAuthProtocol>

@property (retain, nonatomic) IESLiveIMPaaSWorker *work;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSMutableArray *authModels;
@property (retain, nonatomic) NSHashTable *connectObjs;
@property (retain, nonatomic) BDXBridgeEventSubscriber *paymentSubscriber;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queueForLowEndDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)addConnectObj:(id)a0;
- (void)removeConnectObj:(id)a0;
- (void)updatePlayletPaymentInfoWithModels:(id)a0;
- (void)addSubscriber;
- (id)getLiveIMByteLinkService;
- (void)handleAuthStateWithModel:(id)a0 enterFrom:(id)a1 source:(unsigned long long)a2 containerID:(id)a3 trackParams:(id)a4;
- (void)addIMByteLinkSubscriber;
- (void)setupChannel;
- (BOOL)useIMByteLink;
- (void)sendMessageToFE:(id)a0;
- (unsigned long long)transformForItemVideoType:(int)a0;
- (unsigned long long)transformForItemOrderType:(int)a0;
- (void)removeAuthStateWithItemID:(id)a0 containerID:(id)a1;
- (void)setProcessStateWithItemID:(id)a0 containerID:(id)a1;
- (BOOL)getProcessStateWithItemID:(id)a0 containerID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
