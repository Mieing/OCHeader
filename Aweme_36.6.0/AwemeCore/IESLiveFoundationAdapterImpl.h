@class NSString;

@interface IESLiveFoundationAdapterImpl : NSObject <IESLiveFoundationAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getIESLiveVSVideoPlayerController;
- (void)checkIfUserFreeOfFlow:(id /* block */)a0;
- (void)trackActionWithParams:(id)a0;
- (BOOL)liveStrategyDegradeEnable;
- (id)fixVideoCompositionDeviceList;
- (id)fixVideoExportZeroCompositionDeviceList;
- (void)createLiveNodeOptimizeManager;
- (void)trackTabActionWithParams:(id)a0;
- (BOOL)checkRoomService:(id)a0;

@end
