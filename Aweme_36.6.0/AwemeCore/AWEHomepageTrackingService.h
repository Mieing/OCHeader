@class NSString;

@interface AWEHomepageTrackingService : HTSService <AWEHomepageTrackingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 withParams:(id)a1;
- (void)trackEvent:(id)a0 bizParams:(id)a1 hpParams:(id)a2;
- (id)mergeWithBizParams:(id)a0 hpParams:(id)a1;
- (id)getTrackListenManager;
- (id)p_mergeWithBizParams:(id)a0 hpParams:(id)a1;

@end
