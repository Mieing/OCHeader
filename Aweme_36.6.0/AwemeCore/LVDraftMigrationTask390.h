@interface LVDraftMigrationTask390 : LVDraftMigrationTask

- (BOOL)isTimeConsuming;
- (void)migrateDraft:(id)a0;
- (id)effectModelWithResourceID:(id)a0 responseModel:(id)a1;
- (void)migrateFilters:(id)a0 completion:(id /* block */)a1;
- (void)migrateVideoKeyframe:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkExistFilters:(id)a0;
- (void)migrateFilters:(id)a0 responseModel:(id)a1 completion:(id /* block */)a2;

@end
