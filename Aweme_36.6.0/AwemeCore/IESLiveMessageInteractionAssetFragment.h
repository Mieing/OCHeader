@class IESLiveMessageInteractionAssetApi, NSString;

@interface IESLiveMessageInteractionAssetFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (retain, nonatomic) IESLiveMessageInteractionAssetApi *assetApi;
@property (nonatomic) BOOL didMount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)a0;
- (void)fetchAsset:(BOOL)a0;
- (BOOL)subscribeBackendDataWithInteractionAsset;
- (void)realFetchAsset;
- (void)dealInteractionAssetData:(id)a0 error:(id)a1;
- (void)broadcastAssetUpdateWith:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
