@class NSError, NSTimer, ACCGenericTemplatePOIRequestHelper, AWEVideoPublishViewModel, NSString, ACCGenericTemplatePreprocessResultHandler, NSObject, NSMutableArray, ACCGenericTemplatePreprocessTaskTrackModel, AWEGenericTemplatePreprocessHandler;
@protocol OS_dispatch_queue, ACCGenericTemplateCustomInfoTaskDelegate;

@interface ACCGenericTemplateCustomInfoTask : NSObject

@property (retain, nonatomic) ACCGenericTemplatePOIRequestHelper *poiRequestHelper;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCGenericTemplatePreprocessResultHandler *resultHandler;
@property (retain, nonatomic) AWEGenericTemplatePreprocessHandler *presetTaskHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSMutableArray *requestingCustomSlotID;
@property (retain, nonatomic) ACCGenericTemplatePreprocessTaskTrackModel *trackModel;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSError *requestError;
@property (nonatomic) BOOL hasCancelRequest;
@property (retain, nonatomic) NSTimer *requestTimer;
@property (nonatomic) double startTime;
@property (weak, nonatomic) id<ACCGenericTemplateCustomInfoTaskDelegate> delegate;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *requestId;

- (void)getAssetCaptureLocation:(id)a0 completion:(id /* block */)a1;
- (void)startRequestTimer;
- (BOOL)allowReadAsset:(id)a0;
- (id)assetWithCustomSlotInfo:(id)a0;
- (void)addRequestingCustomSlotID:(id)a0;
- (void)didFinishCustomSlot:(id)a0 resultModel:(id)a1 requestError:(id)a2;
- (void)requestPoiWithSlotInfo:(id)a0 phAsset:(id)a1 infoFormat:(id)a2 isOnlyFetchAssetLocation:(BOOL)a3 completion:(id /* block */)a4;
- (void)requestSocialInfoWithSlotInfo:(id)a0 isSelf:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestTimeInfoWithWithSlotInfo:(id)a0 phAsset:(id)a1 infoFormat:(id)a2 completion:(id /* block */)a3;
- (void)requestCameraInfoWithSlotInfo:(id)a0 phAsset:(id)a1 infoFormat:(id)a2 completion:(id /* block */)a3;
- (void)requestWeatherInfoWithSlotInfo:(id)a0 phAsset:(id)a1 infoFormat:(id)a2 completion:(id /* block */)a3;
- (void)p_requestSubInfoWithSlot:(id)a0 infoType:(id)a1 infoFormat:(id)a2 completion:(id /* block */)a3;
- (id)convertToPreprocessResourceWithGenericTemplateInfoResourceModel:(id)a0;
- (void)stopRequestTimer;
- (void)handleRequestTimer;
- (id)initWithRequestId:(id)a0 publishModel:(id)a1;
- (void)requestCustomInfoResultsWithSlotInfos:(id)a0;
- (void).cxx_destruct;

@end
