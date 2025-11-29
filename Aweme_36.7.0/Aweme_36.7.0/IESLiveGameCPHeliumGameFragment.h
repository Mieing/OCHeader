@class NSString, UIViewController, IESLiveGCDTimer;

@interface IESLiveGameCPHeliumGameFragment : IESLiveRoomComponent <IESLiveHeliumGameInterface, IESLiveMGameLifeCycleAction>

@property (weak, nonatomic) UIViewController *heliumGameViewController;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)_enableHeliumGame;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)gameViewWillAppear:(id)a0 mpID:(id)a1;
- (void)gameViewDidAppear:(id)a0 mpID:(id)a1;
- (void)gameViewWillDisappear:(id)a0 mpID:(id)a1;
- (void)gameViewDidDisappear:(id)a0 mpID:(id)a1;
- (void)gameInterfaceOrientationChange:(long long)a0 mpID:(id)a1;
- (BOOL)_isSmallWindowShowing;
- (void)heliumGameWillStart;
- (BOOL)_canShowLiveSmallWindow;
- (void)_attachLiveSmallWindow;
- (void)_resumeLiveWindow;
- (void)_invalidateTimer;
- (void).cxx_destruct;

@end
