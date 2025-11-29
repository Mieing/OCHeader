@interface LVDraftMigrationTask530 : LVDraftMigrationTask

- (void)migrateDraft:(id)a0;
- (id)migrateCartoon:(id)a0;
- (id)migrateCover:(id)a0;
- (id)parseCoverBaseImage:(id)a0;
- (id)parseCoverBaseFrame:(id)a0 withJson:(id)a1;
- (id)parseCoverMaterials:(id)a0 withBase:(id)a1 withJson:(id)a2;
- (id)createCoverDraft:(id)a0 base:(id)a1;
- (id)typePathWith:(id)a0 inPaths:(id)a1;

@end
