@interface HMDDoctorDiagnosing : NSObject

+ (id)instanceForAppID:(id)a0;
+ (id)allModules;
+ (void)handleHermasUploadInfo:(id)a0 isSuccess:(BOOL)a1 dropData:(BOOL)a2;
+ (id)sharedInstance;

- (void)checkOpenStatus:(int)a0 forModule:(id)a1 passed:(BOOL)a2 otherInfo:(id)a3;
- (void)checkUploadStatus:(int)a0 forModule:(id)a1 passed:(BOOL)a2 otherInfo:(id)a3;
- (void)updateBasicStatus:(int)a0 forItem:(int)a1 itemValue:(id)a2 otherInfo:(id)a3;
- (void)checkRecordStatus:(int)a0 forEvent:(id)a1 passed:(BOOL)a2 otherInfo:(id)a3;
- (void)checkRecordStatus:(int)a0 forEventRecords:(id)a1 passed:(BOOL)a2 otherInfo:(id)a3;
- (void)bindUploadStatusFromModule:(id)a0 toModule:(id)a1;

@end
