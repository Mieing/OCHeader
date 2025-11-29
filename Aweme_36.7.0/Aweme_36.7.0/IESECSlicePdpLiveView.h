@class NSString, IESECLivePlayer, IESECSliceXElement;

@interface IESECSlicePdpLiveView : IESECSliceXViewElementView <IESECLivePlayerViewDelegate, IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (retain, nonatomic) IESECLivePlayer *livePlayerView;
@property (retain, nonatomic) IESECSliceXElement *sliceXElement;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasSetupPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidDisappear:(id)a0;
- (void)pageViewWillAppear:(id)a0;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)addLivePlayerView;
- (void)handleIESECSlicePdpLiveViewDidSlide:(id)a0;
- (void)setupLivePlayerViewWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (BOOL)isViewVisible:(id)a0;

@end
