@class WXGImportMessageHelper, NSString, WXGMigrationMsgItemDB, NSObject;
@protocol OS_dispatch_queue, WXGMigrationImportMessageHelperDelegate;

@interface WXGMigrationImportMessageHelper : NSObject <WXGImportMessageHelperDelegate> {
    BOOL m_bImporting;
    unsigned long long m_currentProcessCount;
    unsigned long long m_totalProcesCount;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
}

@property (retain, nonatomic) WXGImportMessageHelper *importMessageHelper;
@property (retain, nonatomic) WXGMigrationMsgItemDB *msgItemDB;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *importQueue;
@property (weak, nonatomic) id<WXGMigrationImportMessageHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startImport;
- (void)stopImport;
- (void)finishAndUpdateSession;
- (void)cancelImport;
- (void)finishAndRemoveDBFiles;
- (void)p_importThread;
- (void)p_oldImportThread;
- (void)onImportOneMsgItem:(id)a0;
- (void).cxx_destruct;

@end
