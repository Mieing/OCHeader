@class NSString, DUXLoadingParticleView;

@interface AWEMiniLunaBaseViewController : UIViewController <AWEMiniLunaBaseViewControllerProtocol>

@property (nonatomic) double appearTimestamp;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMiniLuna;
- (id)currentMusicModel;
- (id)musicService;
- (id)eventModel;
- (id)p_commonParams;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
