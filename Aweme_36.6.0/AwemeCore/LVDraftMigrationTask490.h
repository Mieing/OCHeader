@interface LVDraftMigrationTask490 : LVDraftMigrationTask

+ (id)p_logDescriptionForSticker:(id)a0;
+ (id)p_logDescriptionForStickerList:(id)a0;

- (BOOL)isTimeConsuming;
- (void)migrateDraft:(id)a0;
- (void)migrateStickerResourceID:(id)a0;
- (void)migrateStickerResourceIDDidFinish:(id)a0;

@end
