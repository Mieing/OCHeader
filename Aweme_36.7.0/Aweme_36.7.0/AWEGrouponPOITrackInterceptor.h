@class NSString;

@interface AWEGrouponPOITrackInterceptor : NSObject <AWEPOITrackerInterceptor>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1 btmInfo:(id)a2;
- (BOOL)enableVerify;
- (BOOL)enableVerifyOutGroupon;
- (id)trackVerifySettings;
- (id)newTrackParamsWithEvent:(id)a0 oldParams:(id)a1 btmInfo:(id)a2;

@end
