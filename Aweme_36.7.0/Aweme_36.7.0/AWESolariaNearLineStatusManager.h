@class NSString, AWESolariaNearLineStatus;
@protocol AWEStorageServiceKVInterface;

@interface AWESolariaNearLineStatusManager : NSObject

@property (nonatomic) long long coldLaunchReportCnt;
@property (nonatomic) long long launchReportCnt;
@property (nonatomic) long long dailyLaunchReportCnt;
@property (copy, nonatomic) NSString *dailyDate;
@property (retain, nonatomic) AWESolariaNearLineStatus *nearLineStatus;
@property (nonatomic) BOOL hasInit;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> kvStorageHandler;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;

+ (id)sharedInstance;

- (void)onAppForeground:(long long)a0 backgroundDuration:(long long)a1;
- (void)onAppBackground:(long long)a0 foregroundDuration:(long long)a1;
- (void)onReportSuccess:(id)a0;
- (void)onReportFailed:(id)a0;
- (void)onAppTimeAlarm:(long long)a0;
- (void)onEvent:(long long)a0 event:(id)a1 params:(id)a2;
- (void)updateLandingPage:(BOOL)a0;
- (void)buildSolariaNearLineClientInfo:(id)a0 now:(long long)a1 needCurrentNearLine:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)onDateChanged:(id)a0;
- (void)checkAndInit:(long long)a0;
- (void)buildExtraInfo:(long long)a0 type:(id)a1 withCompletion:(id /* block */)a2;
- (void)fillExtraInfo:(id)a0 extra:(id)a1 reBuild:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
