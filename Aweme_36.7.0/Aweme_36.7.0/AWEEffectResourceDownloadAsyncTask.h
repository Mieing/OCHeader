@class NSString, AWERecordResourceEffectModel;

@interface AWEEffectResourceDownloadAsyncTask : NSObject <AWERecordResourceDownloadTaskProtocol>

@property (retain, nonatomic) AWERecordResourceEffectModel *effectModel;
@property (copy, nonatomic) id /* block */ resourceDownloadCompletion;
@property (nonatomic) BOOL effectLoadFinish;
@property (nonatomic) BOOL musicLoadFinish;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadTaskWithResourceModel:(id)a0 completion:(id /* block */)a1;

- (id)extraInfoDict;
- (void)beginDownloadEffect;
- (void)downloadEffectZipWithCurrentModels:(id)a0 allEffectModels:(id)a1 bindEffects:(id)a2 error:(id)a3;
- (void)bindEffectParamCallback;
- (void)downloadEffectModelWithId:(id)a0 downloadCompleted:(id /* block */)a1;
- (void)resourceAllReadyCallBack;
- (id)p_sortEffects:(id)a0 WithIDArray:(id)a1;
- (void)downloadEffectBindMusicInfoIfNeedWithEffectModel:(id)a0;
- (void)constructionResourceWithCurrentEffect:(id)a0 allEffects:(id)a1 bindEffects:(id)a2 error:(id)a3;
- (BOOL)currentTaskIsExistWith:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)taskType;

@end
