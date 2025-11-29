@class ACCEditPlayerComponent, NSString;
@protocol ACCFeatureComponent;

@interface ACCEditPlayerComponentEditFlowPlugin : NSObject <ACCVideoEditFlowControlSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCEditPlayerComponent *hostComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)willExitEditModeWithService:(id)a0;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
