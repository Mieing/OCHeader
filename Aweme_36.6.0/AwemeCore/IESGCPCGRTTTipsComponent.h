@class IESGCPXPlayGameNetworkLatencyTipsView, NSString;

@interface IESGCPCGRTTTipsComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGRTTTipsRouter>

@property (retain, nonatomic) IESGCPXPlayGameNetworkLatencyTipsView *rttTipsView;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstance:(id)a0 didNetStatusUpdate:(long long)a1 rtt:(long long)a2;
- (void)componentDidAttached;
- (void)setRTTTipsEnabled:(BOOL)a0;
- (void)_updateRTTTipsCache:(BOOL)a0;
- (void)_handleNetworkStatusDidUpdate:(long long)a0 rtt:(long long)a1;
- (void).cxx_destruct;

@end
