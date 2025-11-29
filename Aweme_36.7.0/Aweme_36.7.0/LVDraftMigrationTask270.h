@interface LVDraftMigrationTask270 : LVDraftMigrationTask

+ (id)generateWithPrefix:(id)a0;
+ (id)imageWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)generate;

- (void)migrateDraft:(id)a0;
- (BOOL)checkExistMaterialVideo:(id)a0;
- (long long)createInnerMaterialIfNeed;
- (long long)migrateMaterial:(id)a0;
- (id)mirgateSpeed:(id)a0;
- (id)mirgateMask:(id)a0;
- (void)mirgateCrop:(id)a0;
- (long long)createInnerMaterialWithColor:(id)a0 materialFilePath:(id)a1;

@end
