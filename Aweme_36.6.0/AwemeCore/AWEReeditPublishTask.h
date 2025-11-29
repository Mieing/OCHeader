@class AWEPublishTimeTracker, NSString, NSMutableDictionary, AWEUploadCoverHelper, AWEResourceUploadParametersResponseModel, NSObject, AWEPublishUploadPhotoStage, NSDictionary, AWEReeditPublishStage, AWEPublishRequestParamStage;
@protocol ACCSequenceEditServiceProtocol, OS_dispatch_semaphore, OS_dispatch_queue, ACCEditServiceProtocol;

@interface AWEReeditPublishTask : AWEPublishCommonTask <AWEPublishTaskBusinessProtocol> {
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    AWEPublishTimeTracker *_timeTracker;
}

@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) AWEPublishRequestParamStage *requestParamStage;
@property (retain, nonatomic) AWEPublishUploadPhotoStage *uploadCoverStage;
@property (retain, nonatomic) AWEReeditPublishStage *reeditStage;
@property (retain, nonatomic) NSMutableDictionary *stageTable;
@property (retain, nonatomic) AWEUploadCoverHelper *coverHelper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *draftQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *draftSemaphore;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) unsigned long long flowType;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweme;
- (BOOL)shouldShowProgress;
- (void)setCurrentStage:(long long)a0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)a0;
- (void)publishStage:(id)a0 didChangeStatus:(long long)a1 userInfo:(id)a2;
- (void)saveDraftType:(long long)a0 completion:(id /* block */)a1 isBackup:(BOOL)a2;
- (BOOL)hideDraftWhenRetry;
- (void)saveDraftPrepareForExecuteWithCompletion:(id /* block */)a0;
- (void)resetPreUploadTask;
- (void)finishStage:(id)a0;
- (void)configStage:(long long)a0 status:(long long)a1 userInfo:(id)a2;
- (void)p_deleteDraftIfNeeded;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (void)resume;
- (id)timeTracker;
- (void)setTimeTracker:(id)a0;

@end
