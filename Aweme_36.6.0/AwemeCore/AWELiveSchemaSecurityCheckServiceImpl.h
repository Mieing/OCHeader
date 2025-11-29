@class NSString;

@interface AWELiveSchemaSecurityCheckServiceImpl : NSObject <IESLiveSchemaSecurityCheckService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)schemaInterruptBySecurityCheckWithURL:(id)a0;
- (void)schemaDidRouteSuccessWithURL:(id)a0;

@end
