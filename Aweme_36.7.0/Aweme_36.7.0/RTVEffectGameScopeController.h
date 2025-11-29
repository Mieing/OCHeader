@class NSString;
@protocol RTVXRControllerInjector;

@interface RTVEffectGameScopeController : NSObject <RTVEffectGameScopeController>

@property (readonly, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
