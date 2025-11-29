@class NSString;

@interface AWEPlayInteractionViewControllerAdapter : NSObject <AWEPlayInteractionViewControllerAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)weakTargetClass;

- (id)aAWEPadModuleAdapter;
- (id)elementContainerProviderFactory;
- (id)weakTarget;

@end
