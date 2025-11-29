@protocol AWEFeedMultiDeviceVideoPlaySyncMessageHandleDelegateProtocol;

@interface AWEFeedMultiDeviceVideoPlaySyncNetworkManager : NSObject

@property (weak, nonatomic) id<AWEFeedMultiDeviceVideoPlaySyncMessageHandleDelegateProtocol> messageHandleDelegate;

+ (void)requestSyncVideoInfo:(id /* block */)a0;
+ (void)uploadRecordSyncVideoInfo:(id)a0 andUploadType:(long long)a1 uploadScene:(long long)a2 parameter:(id)a3 completion:(id /* block */)a4;
+ (void)pushMessageOnFrontier:(id)a0;

- (void)onPushManagerConnectionStateChanged:(id)a0;
- (void)initFrontier;
- (void)receiveMessageFromFrontier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
