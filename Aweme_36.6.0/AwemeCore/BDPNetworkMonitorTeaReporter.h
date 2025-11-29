@class NSString;

@interface BDPNetworkMonitorTeaReporter : NSObject <BDPNetworkMonitorListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldEnableNetworkMonitor:(id)a0;
- (long long)detectErrorCodeWithResponseDict:(id)a0;
- (void)p_reportRequestData:(id)a0 lengthThreshold:(long long)a1 reportDict:(id)a2;
- (void)p_networkForEvidence:(id)a0 uniqueID:(id)a1 isAbnormalResponse:(BOOL)a2 responseJson:(id)a3;
- (BOOL)hasMatchRegexWithUrlPath:(id)a0 httpPathRegexList:(id)a1;
- (BOOL)hasMatchRegexWithResponse:(id)a0 httpResponseRegexList:(id)a1;
- (long long)generate_id;
- (BOOL)isNeedReportWithMPID:(id)a0;
- (void)handleResponse:(id)a0;

@end
