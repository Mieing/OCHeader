@interface LVDraftMigrationTask300 : LVDraftMigrationTask

- (BOOL)isTimeConsuming;
- (void)migrateDraft:(id)a0;
- (id)effectModelWithEffectID:(id)a0 responseModel:(id)a1;
- (id)migrateSgementRenderIndex:(id)a0;
- (void)migrateVideoMask:(id)a0 completion:(id /* block */)a1;
- (void)migrateVideoEffects:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkExistVideoEffects:(id)a0;
- (void)migrateVideoEffects:(id)a0 oldResponseModel:(id)a1 newResponseModel:(id)a2 completion:(id /* block */)a3;
- (id)videoEffectModelWithResourceID:(id)a0 responseModel:(id)a1;
- (BOOL)checkExistVideoMask:(id)a0;
- (void)migrateVideoMask:(id)a0 oldResponseModel:(id)a1 newResponseModel:(id)a2 completion:(id /* block */)a3;
- (id)maskEffectModelWithResourceID:(id)a0 responseModel:(id)a1;

@end
