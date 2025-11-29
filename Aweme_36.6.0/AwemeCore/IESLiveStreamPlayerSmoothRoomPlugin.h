@class NSString, IESLiveGCDTimer;

@interface IESLiveStreamPlayerSmoothRoomPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerSmoothRoomPluginProtocol>

@property (retain, nonatomic) IESLiveGCDTimer *protectTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)smoothLeaveLiveWithIsFinished:(BOOL)a0 callTrace:(id)a1;
- (void)addEnterRoomFakeView;
- (void)removeEnterRoomFakeView;
- (void)prepareReuseForSmoothLeaveWithCallTrace:(id)a0;
- (void)pe_viewWillAppear;
- (void)pe_viewWillDisappear;
- (void).cxx_destruct;

@end
