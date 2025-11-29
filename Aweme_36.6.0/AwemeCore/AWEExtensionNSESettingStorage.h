@interface AWEExtensionNSESettingStorage : AWEExtensionStorage

+ (id)sharedNSESettingStorage;

- (BOOL)enablePushPreload;
- (BOOL)ignoreReadedIMPush;
- (id)avatarStrictModeKey;
- (id)ignoreReadedIMPushKey;
- (id)pushPreloadKey;
- (id)getAwemeIDFromPushDetailSchemaKey;
- (id)pushPreloadLimitCountKey;
- (id)pushPreloadValiDurationKey;
- (id)pushPreloadHistoryKey;
- (long long)pushPreloadLimitCount;
- (long long)pushPreloadValidDuration;
- (void)deleteCacheResourceWithAwemeID:(id)a0;
- (void)deleteCacheRecordWithAwemeID:(id)a0;
- (id)pushPreloadDeletOldOnceKey;
- (BOOL)getAvatarStrictMode;
- (void)setAvatarStrictMode:(BOOL)a0;
- (void)setIgnoreReadedIMPush:(BOOL)a0;
- (void)setEnablePushPreload:(BOOL)a0;
- (void)setEnableGetAwemeIDFromSchema:(BOOL)a0;
- (BOOL)enableGetAwemeIDFromSchema;
- (id)getPushDetailAwemeIDFromSchema:(id)a0;
- (void)setPushPreloadLimitCount:(long long)a0;
- (void)setPushPreloadValidDuration:(long long)a0;
- (void)updateCacheRecordWithAwemeID:(id)a0;
- (void)clearPushPreloadDataWithAwemeID:(id)a0;
- (void)deleteOldVersionCacheDataOnlyOnce;

@end
