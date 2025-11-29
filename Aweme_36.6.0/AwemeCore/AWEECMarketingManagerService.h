@class NSString;

@interface AWEECMarketingManagerService : HTSService <AWEECMarketingManagerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEventWithTargetPage:(id)a0 rit:(id)a1 component:(id)a2 eventName:(id)a3 params:(id)a4;
- (void)removeWithTargetPage:(id)a0 rit:(id)a1 component:(id)a2;
- (void)loadWithTargetPage:(id)a0 container:(id)a1 data:(id)a2 commonLogParams:(id)a3 extra:(id)a4;
- (void)registerWithTargetPage:(id)a0 bizParams:(id)a1;
- (void)showWithTargetPage:(id)a0 container:(id)a1 bizParams:(id)a2 callback:(id /* block */)a3;

@end
