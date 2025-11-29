@class CRReportAPIClient, NSMutableDictionary, NSString;

@interface GameLaunchReportMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) CRReportAPIClient *reportClient;
@property (retain, nonatomic) NSMutableDictionary *reportModelDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)tryFetchAndReportGameLaunchAppStore:(id)a0 extraInfo:(id)a1;
- (void)tryFetchAndReportGameLaunchAppStore:(id)a0 extraInfo:(id)a1 info:(id)a2;
- (void)tryFetchAndReportGameLaunchAppStore:(id)a0 extraInfo:(id)a1 isCancel:(BOOL)a2 isLaunch:(BOOL)a3;
- (void)tryFetchAndReportGameLaunchAppStore:(id)a0 extraInfo:(id)a1 isCancel:(BOOL)a2 isLaunch:(BOOL)a3 info:(id)a4;
- (id)reportInfoToDic:(id)a0;
- (id)getReportInfoWithAppId:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
