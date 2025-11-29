@class NSString, UIView;
@protocol HunterContainerProtocol, HunterContainerLifeCycleProtocol;

@interface AWEHotSpotSkyLightView : UIView <AWEHotSpotSkylightLynxViewProtocol>

@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) id<HunterContainerLifeCycleProtocol> lifeCycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)renderHeight;
- (void)sendGlobalEvent:(id)a0 withParams:(id)a1;
- (void)sendEvent:(id)a0 withParams:(id)a1;
- (void)containerLoadFinish;
- (void)loadRawData:(id)a0 extraParams:(id)a1 inController:(id)a2;
- (void)loadClientData:(id)a0 withRawData:(id)a1 withExtraParams:(id)a2 inController:(id)a3;
- (void)updateDataWithMode:(id)a0;
- (void)refreshLynxView:(id /* block */)a0;
- (void).cxx_destruct;
- (id)containerID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
