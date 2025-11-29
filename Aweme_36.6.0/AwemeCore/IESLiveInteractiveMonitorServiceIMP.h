@class NSDictionary, NSString;

@interface IESLiveInteractiveMonitorServiceIMP : NSObject <IESLiveInteractiveMonitorService>

@property (retain, nonatomic) NSDictionary *sampleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audienceInteractiveMonitorWithAPIPath:(id)a0 scene:(unsigned long long)a1 roleType:(unsigned long long)a2 requestTime:(double)a3 response:(id)a4 error:(id)a5 extra:(id)a6;
- (void)traceWithBusinessType:(unsigned long long)a0 traceName:(id)a1 step:(id)a2 extra:(id)a3;
- (id)audienceInteractDefaultSampleConfig;
- (id)samplingServiceNameWithServiceName:(id)a0 key:(id)a1 roleType:(unsigned long long)a2;
- (id)pr_paramsWithAPIPath:(id)a0 roleType:(unsigned long long)a1 requestTime:(double)a2 response:(id)a3 error:(id)a4 extra:(id)a5;
- (unsigned long long)fullLinkRoleTypeWithRoleType:(unsigned long long)a0;
- (unsigned long long)moduleWithScene:(unsigned long long)a0;
- (id)logTagWithScene:(unsigned long long)a0;
- (id)descForRoleType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
