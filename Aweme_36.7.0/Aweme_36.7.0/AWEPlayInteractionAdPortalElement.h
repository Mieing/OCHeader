@interface AWEPlayInteractionAdPortalElement : AWEPlayInteractionLeftElement <AWEPlayInteractionAdPortalElementProtocol, AWEElementSelfFilterProtocol, CMCLiveTopviewMessage, AWEUserMessage, AWESearchAdAppointmentResultMessage> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_auroraPortal;
    void /* unknown type, empty encoding */ $__lazy_storage_$_portalContainer;
}

+ (void)preloadResourcesWithModel:(id)a0;
+ (id)activateInfoWithContext:(id)a0;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)handleAppointmentResultWithAdModel:(id)a0 sceneType:(long long)a1 appointmentStatus:(BOOL)a2 error:(id)a3;
- (void)liveDidEnd:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)performTeleportEvent:(id)a0;
- (void)teleport;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPortalViewFrameInView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)viewDidLoad;

@end
