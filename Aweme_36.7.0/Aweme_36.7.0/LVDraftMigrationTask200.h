@interface LVDraftMigrationTask200 : LVDraftMigrationTask

- (BOOL)isTimeConsuming;
- (void)migrateDraft:(id)a0;
- (id)migrateVideoSgementScale:(id)a0;
- (void)migrateVideoAnimation:(id)a0 completion:(id /* block */)a1;
- (id)clipDict:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1 canvasRatio:(id)a2;
- (BOOL)checkExistVideoAnimation:(id)a0;
- (void)migrateVideoAnimation:(id)a0 oldResponseModel:(id)a1 newResponseModel:(id)a2 completion:(id /* block */)a3;
- (id)effectModelWithEffectID:(id)a0 responseModel:(id)a1;
- (id)effectModelWithResourceID:(id)a0 responseModel:(id)a1;
- (struct CGSize { double x0; double x1; })canvasSizeWithRatio:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1;
- (double)calculateScaleWithCanvasSize:(struct CGSize { double x0; double x1; })a0 videoSize:(struct CGSize { double x0; double x1; })a1;

@end
