@class NSString, NSMutableArray;

@interface WCDumpReporterMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *uploadedIssueArray;
@property (retain, nonatomic) NSMutableArray *uploadingIssueArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)uploadAllDump;
- (void)uploadDumpWithDate:(id)a0;
- (void)onIPXX:(id)a0;
- (id)getDataPath;
- (void)asyncUploadFolderData:(id)a0;
- (void)uploadDumpOnIPXX:(id)a0;
- (void)handleBeginReportLagIssue:(id)a0;
- (void)handleReportLagIssue:(id)a0 success:(BOOL)a1;
- (void).cxx_destruct;

@end
