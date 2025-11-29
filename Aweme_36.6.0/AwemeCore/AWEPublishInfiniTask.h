@class NSString, AWEPublishFlowModel, AWECreateAwemeResponse, IESContainer, NSDictionary, AWEPublishInfiniTaskAutoRetryStrategy, AWEResourceUploadParametersResponseModel, AWEPublishTimeTracker;
@protocol AWEPublishInfiniTaskCoordinatorServiceProtocol, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPublishInfiniTask : AWEPublishMultiSplitableTask <AWEPublishInfiniTaskBusinessProtocol> {
    BOOL _isTriggerInEdit;
    unsigned long long _lastFlowType;
    double _progress;
    unsigned long long _entryType;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    AWEPublishTimeTracker *_timeTracker;
}

@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeReponse;
@property (weak, nonatomic) id<AWEPublishInfiniTaskCoordinatorServiceProtocol> coordinatorService;
@property (retain, nonatomic) AWEPublishInfiniTaskAutoRetryStrategy *autoRetryStrategy;
@property (retain, nonatomic) IESContainer *serviceProvider;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (readonly, nonatomic) BOOL isSuspendReseted;
@property (nonatomic) unsigned long long flowType;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)aweme;
- (id)createAwemeResponse;
- (BOOL)isFirstPost;
- (id)coupon;
- (BOOL)isHotSpotTask;
- (id)editService;
- (void)setEditService:(id)a0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)a0;
- (void)saveDraftType:(long long)a0 completion:(id /* block */)a1 isBackup:(BOOL)a2;
- (BOOL)hideDraftWhenRetry;
- (BOOL)isTriggerInEdit;
- (void)setIsTriggerInEdit:(BOOL)a0;
- (void)simulateProgress;
- (void)saveDraftPrepareForExecuteWithCompletion:(id /* block */)a0;
- (void)resetPreUploadTask;
- (unsigned long long)lastFlowType;
- (id)flowMessageService;
- (id)extraForTrack;
- (id)extraForPublishFail;
- (void)markEditPreUploadToPublish;
- (void)autoRetryWithStrategy:(id)a0;
- (void)updateCreateAwemeResponse:(id)a0;
- (BOOL)suspendRetryWithConfig:(id)a0;
- (id)provideOriginFlowModel;
- (unsigned long long)entryType;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)execute;
- (void)commonInit;
- (double)progress;
- (void)resume;
- (void)dealloc;
- (void)setProgress:(double)a0;
- (void)setEntryType:(unsigned long long)a0;
- (id)timeTracker;
- (void)setTimeTracker:(id)a0;

@end
