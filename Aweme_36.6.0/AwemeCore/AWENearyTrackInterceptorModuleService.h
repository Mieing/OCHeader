@class NSString;

@interface AWENearyTrackInterceptorModuleService : HTSService <AWENearyTrackInterceptorModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchSettings;
- (id)verifyEvent:(id)a0 params:(id)a1 complete:(id /* block */)a2;

@end
