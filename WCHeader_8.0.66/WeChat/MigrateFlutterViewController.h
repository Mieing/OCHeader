@interface MigrateFlutterViewController : MMFlutterViewController <WCAccountAutoLoginControlLogicExt> {
    id m_kickOutLogicObj;
    SEL m_kickOutSel;
}

@property (nonatomic) BOOL isOfflineEmigrate;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dealloc;
- (void)setOfflineEmigrate:(BOOL)a0;
- (BOOL)getOfflineEmigrate;
- (void)autoLoginLogic:(id)a0 needInterruptKickOut:(id /* block */)a1 withReplayKickOutSelector:(SEL)a2;
- (void)registerKickOutEvent:(id)a0 AndSelector:(SEL)a1;
- (void)doLogoutAction;
- (BOOL)isLogout;
- (void).cxx_destruct;

@end
