@class NSString;

@interface BDXContainerLifeCycleDispatcher : BDXMultiDelegate <BDXContainerLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addInterceptor:(id)a0;
+ (id)shareInstance;


@end
