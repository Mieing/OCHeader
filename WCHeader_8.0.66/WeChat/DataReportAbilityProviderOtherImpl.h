@class NSString;

@interface DataReportAbilityProviderOtherImpl : NSObject <AmoebaAbilityProviderOther>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)kvReport:(id)a0 withLogId:(unsigned long long)a1;
- (void)rtReport:(id)a0 withLogId:(unsigned long long)a1;
- (void)sendDataReportEdgeData:(id)a0;
- (void)sendDataReportUBAEdgeData:(id)a0;
- (void)sendDebugInfo:(unsigned int)a0 key:(unsigned int)a1 content:(id)a2;
- (id)getJsonRepresentation:(id)a0;
- (id)getTing28683Params;
- (id)genJsonArray:(id)a0;
- (id)genJsonDictionary:(id)a0;
- (BOOL)isFinderTabPage:(id)a0;
- (void)logWithLevel:(long long)a0 module:(const char *)a1 file:(const char *)a2 line:(int)a3 funcName:(const char *)a4 message:(id)a5;
- (id)getFinderHalfPreViewController:(id)a0;
- (void)setCgiDataReportMonitor:(id)a0;
- (id)getMd5:(id)a0;
- (BOOL)isFlutterPage:(id)a0;
- (unsigned int)getClientVersion;
- (void)onRealTimeKVReportSucceedWithWrap:(id)a0;
- (void)onRealTimeKVReportFailedWithWrap:(id)a0;

@end
