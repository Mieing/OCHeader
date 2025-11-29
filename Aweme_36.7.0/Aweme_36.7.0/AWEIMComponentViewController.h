@class NSString, AWEIMComponentManager;

@interface AWEIMComponentViewController : UIViewController <AWEIMComponentContainer>

@property (nonatomic) BOOL notFirstViewDidAppear;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionPublisher:(id)a0;
- (id)resolveService:(id)a0;
- (void)setupComponentEnvironment;
- (void)p_observeAppLifeCycle;
- (void)p_appWillResignActive;
- (void)p_appDidBecomeActive;
- (void)p_handleDidEnterBackgroundNotification;
- (void)p_handleWillEnterForegroundNotification;
- (id)resolveService:(id)a0 inContainer:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
