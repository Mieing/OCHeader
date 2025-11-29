@class NSString, ReportObj16171;

@interface WePkgStatReport : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>

@property (retain, nonatomic) ReportObj16171 *reportObj16171;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)svrReport14229:(id)a0;
- (void)kvReport13980:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)svrReport:(unsigned int)a0 withLogExt:(id)a1;
- (void).cxx_destruct;

@end
