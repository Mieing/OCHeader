@class NSDictionary, NSString;

@interface BDPBindingReportModule : NSObject <BDPCommonBridgeModule>

@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)sendAdLog:(id)a0;
- (id)sendLogV3:(id)a0;

@end
