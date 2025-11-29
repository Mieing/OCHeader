@class NSString;

@interface WCCrashReporterMgr : MMRootService <MMServiceProtocol>

@property (nonatomic) unsigned long long currentReportType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportId:(int)a0 key:(int)a1 andValue:(int)a2;
+ (void)reportIdKeyList:(struct vector<mars::smc::STIDKeyInfo, std::allocator<mars::smc::STIDKeyInfo>> { struct STIDKeyInfo *x0; struct STIDKeyInfo *x1; struct __compressed_pair<mars::smc::STIDKeyInfo *, std::allocator<mars::smc::STIDKeyInfo>> { struct STIDKeyInfo *x0; } x2; })a0;
+ (void)reportWithID:(int)a0 ext:(id)a1 isReportNow:(BOOL)a2 isKeyLog:(BOOL)a3;

- (id)init;
- (void)handleBeginReportCrashIssue:(id)a0;
- (void)handleReportCrashIssue:(id)a0 success:(BOOL)a1 newReport:(BOOL)a2;
- (void)handleReportCrashError:(id)a0;
- (void)handleBeginReportCoreDumpIssue:(id)a0;
- (void)handleReportCoreDumpIssue:(id)a0 success:(BOOL)a1;

@end
