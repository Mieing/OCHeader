@class LVDraftMigrationConfig, NSString, NSObject;
@protocol LVDraftMigrationFlowDelegate, OS_dispatch_queue;

@interface LVDraftMigrationFlow : NSObject <LVDraftMigrationTaskDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_tmpDirectiory;
    long long _latestMigrationVersion;
    BOOL _cancelTag;
    BOOL _copyedFile;
    BOOL _cancelCopyedFile;
    id /* block */ _processBlock;
    id /* block */ _draftDirectoryBlock;
    id /* block */ _completeBlock;
}

@property (retain, nonatomic) LVDraftMigrationConfig *config;
@property (copy, nonatomic) NSString *root;
@property (weak, nonatomic) id<LVDraftMigrationFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onMainThread:(id /* block */)a0;
+ (id)defaultMigrationFlow;

- (void)buildData;
- (id)draftPath;
- (void)loadJsonFile:(id)a0 complete:(id /* block */)a1 fail:(id /* block */)a2;
- (void)migrateDraftWithSourcePath:(id)a0 withJson:(id)a1;
- (void)sendProcess:(unsigned long long)a0;
- (void)startMigrateTask:(id)a0 withJson:(id)a1;
- (void)sendComplete:(id)a0 withError:(long long)a1;
- (void)migrateTask:(id)a0 taskIndex:(unsigned long long)a1;
- (void)copyTmpFilesIfNeed:(id)a0 withJson:(id)a1 callBack:(id /* block */)a2;
- (BOOL)needCopyFile;
- (void)sendDraftDirChange:(id)a0 draftDir:(id)a1;
- (void)moveBackAction:(id)a0 withSourceDir:(id)a1 withJson:(id)a2;
- (void)migrationTaskBegin:(id)a0;
- (void)migrationTask:(id)a0 upgrade:(BOOL)a1 result:(id)a2 error:(long long)a3;
- (void)cancelCopyFile;
- (void)checkDraftStatus:(id)a0 complete:(id /* block */)a1 fail:(id /* block */)a2;
- (void)migrateDraftWithSourcePath:(id)a0 withJson:(id)a1 process:(id /* block */)a2 draftDirectoryChange:(id /* block */)a3 complete:(id /* block */)a4;
- (void)checkAndMigrateDraftWithSourcePath:(id)a0 jsonString:(id)a1 process:(id /* block */)a2 complete:(id /* block */)a3;
- (BOOL)syncJsonToDisk:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)cancel;

@end
