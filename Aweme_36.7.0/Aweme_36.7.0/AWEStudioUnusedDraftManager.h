@class ACCThreadSafeMutableDictionary;

@interface AWEStudioUnusedDraftManager : NSObject

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *draftTimeCache;

+ (id)sharedManager;

- (void)processDrafts;
- (void)saveSoftDeleteTimeForDirectory:(id)a0;
- (void)clearSoftDeleteTimeForDirectory:(id)a0;
- (void)rollbackAllPendingDeleteDrafts;
- (void)softDeleteUnusedDrafts;
- (void)deleteExpiredPendingDrafts;
- (BOOL)isDraftUnused:(id)a0;
- (void)softDeleteDraft:(id)a0;
- (id)loadSoftDeleteTimeForDirectory:(id)a0;
- (void)moveDraftToTmpDirectory:(id)a0;
- (void)rollbackPendingDeleteDraft:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
