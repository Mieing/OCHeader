@class NSString, AWEAdGeneralSearchLynxComponentMonitorContext, AWESearchAdPopConfigModel, AWEBDARifleView;
@protocol AWESearchAdEggLynxContainerViewDelegate;

@interface AWESearchAdEggLynxContainerView : UIView <AWESearchAdEggLynxContainerView, AWEBDARifleViewDelegate>

@property (retain, nonatomic) AWESearchAdPopConfigModel *adEgg;
@property (retain, nonatomic) AWEBDARifleView *bdaRifleView;
@property (retain, nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext *lynxMonitorContext;
@property (weak, nonatomic) id<AWESearchAdEggLynxContainerViewDelegate> delegate;
@property (nonatomic) double loadStartTimeStamp;
@property (nonatomic) double loadStartFirstScreenTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)rifleViewDidStartLoading:(id)a0;
- (void)rifleViewvDidFirstScreen:(id)a0;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (id)lynxBridges;
- (id)createLynxMonitorContext;
- (void)updateRifleConfiguration:(id)a0;
- (void)postSearchImmersiveAdEggMonitorShowEventIfNeed;
- (void)configureBdaRifleViewWithModel:(id)a0 modelDict:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
