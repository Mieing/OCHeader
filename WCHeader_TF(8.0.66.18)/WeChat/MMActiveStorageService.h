@class MMActiveStorageReportStatus, MMTimer, NSString, MMActiveMessageInfoPersist, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MMActiveStorageService : MMUserService <IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *arrSessionInfo;
@property (retain, nonatomic) NSMutableArray *arrBrandSessionInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) MMActiveMessageInfoPersist *persistInfo;
@property (retain, nonatomic) MMActiveStorageReportStatus *lastReportStatus;
@property (nonatomic) BOOL isScanning;
@property (retain, nonatomic) MMTimer *reportTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)parseMesLocalIdFromPath:(id)a0;
+ (BOOL)checkActiveWithLocalID:(unsigned int)a0 infoType:(unsigned long long)a1 fileName:(id)a2 with:(id)a3;

- (void)onServiceInit;
- (void)reportPhase;
- (BOOL)isShouldReport;
- (BOOL)getOpenToReport;
- (unsigned int)getActiveMsgInterval;
- (BOOL)shouldReportClickTimeGothrough;
- (void)startToReport;
- (void)checkSession:(id)a0 reportStatus:(id)a1;
- (void)onUserClickImage:(id)a0 byChangePage:(BOOL)a1;
- (void)onUserClickVideo:(id)a0 inFullScreenView:(BOOL)a1;
- (void)onUserClickFile:(id)a0;
- (void)onUserClickAudio:(id)a0;
- (void).cxx_destruct;

@end
