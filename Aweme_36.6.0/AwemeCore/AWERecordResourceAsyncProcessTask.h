@class AWERecordResourceMusicModel, NSString, NSDictionary, NSArray, AWERecordResourceEffectModel;

@interface AWERecordResourceAsyncProcessTask : NSObject <AWERecordDownloadResourceProcessProtocol, AWERecordDownloadResourceResultProtocol>

@property (retain, nonatomic) NSDictionary *extraPublicParams;
@property (retain, nonatomic) AWERecordResourceEffectModel *resourceEffectModel;
@property (nonatomic) BOOL executeEffectTaskStart;
@property (copy, nonatomic) id /* block */ effectProcessCompletion;
@property (copy, nonatomic) NSString *getEffectId;
@property (retain, nonatomic) NSArray *getEffectIds;
@property (retain, nonatomic) AWERecordResourceMusicModel *resourceMusicModel;
@property (nonatomic) BOOL executeMusicTaskStart;
@property (copy, nonatomic) id /* block */ musicProcessCompletion;
@property (copy, nonatomic) NSString *getMusicId;
@property (nonatomic) BOOL ignoreLoadEffect;
@property (nonatomic) BOOL musicBackupLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtraParam:(id)a0;
- (void)forceLoadMusicBackup;
- (void)getEffectWithEffectIds:(id)a0 completion:(id /* block */)a1;
- (void)getMusicWithMusicId:(id)a0 ignoreLoadEffect:(BOOL)a1 completion:(id /* block */)a2;
- (void)beginProcessEffect;
- (void)sendMusicResultCallback;
- (void)sendEffectResultCallback;
- (BOOL)effectFilterBusinessMusicIfNeed:(id)a0;
- (BOOL)effectNewFilterBusinessMusicIfNeed:(id)a0;
- (id)filterPreloadEffectIfNeedWithEffectLists:(id)a0;
- (id)parentEffectWithCurrentEffect:(id)a0 allEffects:(id)a1;
- (void)addEffectResourceModel:(id)a0;
- (void)addMusicResourceModel:(id)a0;
- (void)executeEffectProcessTask;
- (void)executeMusicProcessTask;
- (void)getEffectWithEffectId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
