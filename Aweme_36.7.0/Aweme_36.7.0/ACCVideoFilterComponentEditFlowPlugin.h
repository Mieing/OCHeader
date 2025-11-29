@class ACCEditVideoFilterComponent, NSString;
@protocol ACCFeatureComponent;

@interface ACCVideoFilterComponentEditFlowPlugin : NSObject <ACCVideoEditFlowControlSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCEditVideoFilterComponent *hostComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

@end
