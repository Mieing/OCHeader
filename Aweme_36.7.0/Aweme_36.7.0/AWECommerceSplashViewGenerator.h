@class NSString;

@interface AWECommerceSplashViewGenerator : HTSService <AWECommerceSplashViewGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generatorSplashStyleViewWithModel:(id)a0 extra:(id)a1 delegate:(id)a2;
- (void)trackShowFailedWithReason:(long long)a0 delegate:(id)a1;

@end
