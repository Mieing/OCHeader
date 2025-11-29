@interface LVDraftFigureEffectMigration : NSObject

+ (id)migratePartialFaceEffect:(id)a0;
+ (void)migrateFigureOfDraft:(id)a0 draftPath:(id)a1 completion:(id /* block */)a2;
+ (void)downloadEffect:(id)a0 effectPayloads:(id)a1 draftPath:(id)a2 completion:(id /* block */)a3;
+ (id)onlineFaceEffectResourceIDs;
+ (void)migrateFigureOfDraftString:(id)a0 draftPath:(id)a1 completion:(id /* block */)a2;

@end
