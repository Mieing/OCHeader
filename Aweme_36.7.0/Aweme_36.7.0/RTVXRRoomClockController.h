@class RTVXRRoomClockCorrector, RTVVoipSession, NSString;
@protocol RTVUserProfileManagerInterface, RxInjector, RTVXRControllerInjector, RTVFeedControllerInterface;

@interface RTVXRRoomClockController : NSObject <RTVXRRoomClockController, RTVXRRoomClockCorrectorDelegate, RTVFeedObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly, nonatomic) RTVXRRoomClockCorrector *clockCorrectorRequester;
@property (readonly, nonatomic) RTVXRRoomClockCorrector *clockCorrectorReplier;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) id<RTVFeedControllerInterface> feedController;
@property (nonatomic) long long currentRequestVersion;
@property (nonatomic) BOOL debugEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)currentTimeStampWithTargetID:(id)a0 feedVersion:(long long)a1;
- (void)feedController:(id)a0 didChangeToShareModel:(id)a1;
- (void)feedController:(id)a0 willStartWithShareModel:(id)a1;
- (void)feedController:(id)a0 didFinishWithShareModel:(id)a1;
- (BOOL)__isOptimizeClockCorrector;
- (id)__currentUserID;
- (BOOL)__isEnableRefresh;
- (void)clockCorrector:(id)a0 targetUserID:(id)a1 clockDiffDidChange:(long long)a2 downloadNetworkTime:(long long)a3;
- (void).cxx_destruct;

@end
