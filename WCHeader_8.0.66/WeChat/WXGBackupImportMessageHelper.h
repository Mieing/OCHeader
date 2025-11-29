@class WXGImportMessageHelper, WXGImportAnalyseInfo, NSObject, WXGBackupIndexDB;
@protocol OS_dispatch_queue, WXGBackupImportMessageHelperDelegate;

@interface WXGBackupImportMessageHelper : NSObject {
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
}

@property (nonatomic) BOOL bImportingData;
@property (retain, nonatomic) WXGImportMessageHelper *importMessageHelper;
@property (retain, nonatomic) WXGBackupIndexDB *indexDB;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue;
@property (nonatomic) unsigned long long importType;
@property (weak, nonatomic) id<WXGBackupImportMessageHelperDelegate> delegate;
@property (retain, nonatomic) WXGImportAnalyseInfo *importInfo;

- (id)init;
- (void)dealloc;
- (void)startImport:(BOOL)a0;
- (void)importWhenDestination:(BOOL)a0;
- (void)stopImport;
- (void)finishAndUpdateSession;
- (void)cancelImport;
- (void)finishAndRemoveDBFiles;
- (void)p_importWhenDestinationThread;
- (void)p_recoverThread;
- (void).cxx_destruct;

@end
