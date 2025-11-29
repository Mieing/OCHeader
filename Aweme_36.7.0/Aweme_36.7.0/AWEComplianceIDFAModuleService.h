@class NSString;

@interface AWEComplianceIDFAModuleService : HTSService <AWEComplianceIDFAModuleService>

@property (class, readonly, nonatomic) unsigned long long trackingAuthorizationStatus;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)tm_permissionStateOfATStatus:(unsigned long long)a0;
+ (void)requestTrackingAuthorizationWithCompletionHandler:(id /* block */)a0;


@end
