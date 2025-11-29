@class NSString;

@interface EdgeComputingDataSourceService : MMObject <IEdgeComputingDataSourceExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initAutoTestSwitch;
- (void)onSendKV:(id)a0 withReportID:(unsigned int)a1;
- (void)onSendForeBack:(id)a0;
- (void)onSendSessionSingle:(id)a0;
- (void)onSendSessionMerge:(id)a0;
- (void)onSendSessionPageSingle:(id)a0 withReportID:(unsigned int)a1;
- (void)onSendSessionPageMerge:(id)a0;
- (void)onSendSessionUBA:(id)a0;
- (void)onSendSessionSingleAll:(id)a0;
- (void)onSendSessionUBAAll:(id)a0;
- (void)onSendDataReportSDKUBAData:(id)a0;
- (void)onSendDataReportSDKData:(id)a0;

@end
