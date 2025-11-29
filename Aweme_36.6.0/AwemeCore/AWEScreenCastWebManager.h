@class NSString;

@interface AWEScreenCastWebManager : NSObject <BDSCRouterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openScheme:(id)a0;
- (void)openScheme:(id)a0 forceInPortraitStyle:(BOOL)a1;
- (void)openAppURL:(id)a0;

@end
