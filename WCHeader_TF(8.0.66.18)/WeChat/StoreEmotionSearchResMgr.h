@class NSString;

@interface StoreEmotionSearchResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)tryUpdateEmoticonResForSubType:(unsigned int)a0;
+ (void)unZipResWithPath:(id)a0 forSubType:(unsigned int)a1 version:(unsigned int)a2;
+ (id)dirPathAfterUnzipIfNeedUpdateForSubType:(unsigned int)a0;
+ (unsigned int)getCurrentVersionForSubType:(unsigned int)a0;
+ (void)resetResVersionForSubType:(unsigned int)a0;
+ (id)MMKVVersionKeyForEmoticonResWithSubType:(unsigned int)a0;
+ (id)dirPathOfEmoticonResForSubType:(unsigned int)a0;
+ (unsigned int)defaultVersionForSubType:(unsigned int)a0;
+ (void)deleteResForSubType:(unsigned int)a0;
+ (id)unZipResIfTargetNotExistWithPath:(id)a0 forSubType:(unsigned int)a1;
+ (void)tryRepairNewEmoijRes;
+ (BOOL)checkConfigFileExistIfNeeded:(id)a0 type:(unsigned int)a1;

- (void)onServiceInit;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)onResDeleteFinishWithResType:(unsigned int)a0 subResType:(unsigned int)a1;

@end
