@class AWEPublishTimeTracker, NSString, IESContainer, AWEPublishFlowModel, AWEResourceUploadParametersResponseModel, NSDictionary;
@protocol AWEPublishInfiniTaskFlowServiceProtocol, ACCSequenceEditServiceProtocol, AWEPublishInfiniTaskProgressServiceProtocol, ACCEditServiceProtocol;

@interface AWEReeditVideoPublishTask : AWEPublishCommonTask <AWEPublishTaskBusinessProtocol> {
    unsigned long long _lastFlowType;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    AWEPublishTimeTracker *_timeTracker;
}

@property (weak, nonatomic) id<AWEPublishInfiniTaskFlowServiceProtocol> flowService;
@property (weak, nonatomic) id<AWEPublishInfiniTaskProgressServiceProtocol> progressService;
@property (retain, nonatomic) IESContainer *serviceProvider;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
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
- (void)simulateProgress;
- (void)saveDraftPrepareForExecuteWithCompletion:(id /* block */)a0;
- (void)resetPreUploadTask;
- (unsigned long long)lastFlowType;
- (id)flowMessageService;
- (id)extraForTrack;
- (id)extraForPublishFail;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)execute;
- (void)commonInit;
- (void)resume;
- (void)dealloc;
- (id)timeTracker;
- (void)setTimeTracker:(id)a0;

@end
