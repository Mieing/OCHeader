@class NSString;
@protocol AWEVideoDraftDBProtocol;

@interface AWEVideoDraftDBManager : NSObject <AWEVideoDraftDBProtocol>

@property (retain, nonatomic) id<AWEVideoDraftDBProtocol> realDBManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (long long)draftCount;
- (BOOL)hasDraft;
- (BOOL)saveDraft:(id)a0 error:(id *)a1;
- (BOOL)draftExistWithID:(id)a0;
- (BOOL)saveProjectDrafts:(id)a0 error:(id *)a1;
- (BOOL)hasPublishBackUp;
- (id)retrieveBasicDrafts;
- (id)retrieveLatestBasicDraft;
- (id)allDraftIdsWithCache;
- (BOOL)transitionStatusNormalWithDraftID:(id)a0 error:(id *)a1;
- (BOOL)transitionStatusPendingDeleteWithDraftID:(id)a0 duration:(long long)a1 requireBackup:(BOOL)a2 scene:(id)a3 error:(id *)a4;
- (BOOL)transitionStatusToDeleteWithDraftID:(id)a0 error:(id *)a1;
- (BOOL)extendExpireTimeWithDraftID:(id)a0 duration:(long long)a1 error:(id *)a2;
- (BOOL)markAllPublishBackupAsDraftWithError:(id *)a0;
- (BOOL)markDraftFlowStepAsPublishWithDraftId:(id)a0 error:(id *)a1;
- (BOOL)markDraftSourceWithID:(id)a0 trackParams:(id)a1 error:(id *)a2;
- (id)retrieveDraftsWithError:(id *)a0;
- (id)retrieveProjectDraftsWithDraftID:(id)a0 error:(id *)a1;
- (id)retrievePorjectDraftWithDraftID:(id)a0 uuid:(id)a1 error:(id *)a2;
- (id)retrieveDeletedDrafts;
- (id)retrieveEditBackUpsWithError:(id *)a0;
- (id)retrieveWithDraftId:(id)a0 error:(id *)a1;
- (id)retrieveBasicDraftWithDraftID:(id)a0 error:(id *)a1;
- (id)retrieveWithItemId:(id)a0 error:(id *)a1;
- (id)retrieveNewestDraftWithError:(id *)a0;
- (id)deleteAllEditBackupsWithErorr:(id *)a0 exceptDraft:(id)a1;
- (BOOL)deleteDraftWithId:(id)a0 error:(id *)a1;
- (long long)allDraftCount;
- (id)allDraftIds;
- (id)allVisibleDraftIds;
- (id)allUserIdWithDraftIds;
- (BOOL)deleteDraftsExcept:(id)a0 inDBFilePath:(id)a1;
- (BOOL)correctDraftBackupIfNeededWithBasicDraft:(id)a0 backup:(BOOL *)a1;
- (id)projectTableName;
- (void).cxx_destruct;
- (id)dbPath;
- (id)type;
- (id)tableName;

@end
