@class NSString, AWEAwemeModel;

@interface AFDPureModePageNotificationController : AWEBaseController <AFDPureModePageControllerProtocol>

@property (nonatomic) double startStayTime;
@property (retain, nonatomic) AWEAwemeModel *preModel;
@property (nonatomic) BOOL hasAddedNotifications;
@property (nonatomic) BOOL pageVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)trackStayTime;
- (void)handleWindowDidBecomeKeyNotification:(id)a0;
- (void)handleAppDidBecomeActiveNotification:(id)a0;
- (void)captureStatusDidChanged;
- (void)handelAppWillResignActiveNotification:(id)a0;
- (void)handleEnterBackground:(id)a0;
- (void)viewDidAppear;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)dealloc;
- (void)removeNotifications;
- (void)didEndDisplaying;
- (void)viewDidDisappear;

@end
