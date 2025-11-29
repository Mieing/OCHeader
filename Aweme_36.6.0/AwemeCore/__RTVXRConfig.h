@class NSString;
@protocol RxInjector, RTVXREngineBusinessConfiguration;

@interface __RTVXRConfig : NSObject <RTVXREngineInternalConfiguration>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (weak, nonatomic) id<RTVXREngineBusinessConfiguration> xrEngineBusinessConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
