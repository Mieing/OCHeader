@class NSString;

@interface AWELiveDynamicIslandEndServiceImpl : NSObject <IESLiveDynamicIslandEndService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceEndDynamicIslandWithCompletion:(id /* block */)a0;

@end
