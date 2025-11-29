@class NSString;

@interface HalfContainerPanGestureRecognizer : UIPanGestureRecognizer <AWENoActionEventHandlerGestureProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long currentDirection;
@property (nonatomic) unsigned long long lastDirection;
@property (nonatomic) long long containerState;

- (BOOL)shouldBeTreatAsUsefulAction;

@end
