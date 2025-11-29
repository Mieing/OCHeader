@class NSString, VSDManager;

@interface VSDPanGestureRecognizer : UIPanGestureRecognizer <AWENoActionEventHandlerGestureProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) VSDManager *manager;

- (BOOL)shouldBeTreatAsUsefulAction;
- (void).cxx_destruct;

@end
