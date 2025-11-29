@class NSString;

@interface AWELaunchOptimizeLandingBlockTask : NSObject <AWEHPLandingBlockTaskProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)blockWithContext:(id)a0 completion:(id /* block */)a1;

@end
