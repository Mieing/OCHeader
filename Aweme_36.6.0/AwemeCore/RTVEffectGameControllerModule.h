@class NSString;
@protocol RxInjector, RTVInteractionConfigureManagerInterface;

@interface RTVEffectGameControllerModule : NSObject <RTVXRControllerModule>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
