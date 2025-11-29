@class NSTimer, NSString, AWEVideoPublishViewModel, ACCGenericTemplatePreprocessResultHandler, NSObject, NSMutableArray, ACCGenericTemplatePreprocessTaskTrackModel, AWEGenericTemplatePreprocessHandler;
@protocol OS_dispatch_queue, ACCGenericTemplateTTSTaskDelegate;

@interface ACCGenericTemplateTTSTask : NSObject

@property (retain, nonatomic) NSString *requestId;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCGenericTemplatePreprocessResultHandler *resultHandler;
@property (retain, nonatomic) AWEGenericTemplatePreprocessHandler *presetTaskHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSMutableArray *requestingCustomSlotID;
@property (retain, nonatomic) ACCGenericTemplatePreprocessTaskTrackModel *trackModel;
@property (nonatomic) BOOL hasCancelRequest;
@property (retain, nonatomic) NSTimer *requestTimer;
@property (nonatomic) double startTime;
@property (weak, nonatomic) id<ACCGenericTemplateTTSTaskDelegate> delegate;
@property (copy, nonatomic) NSString *templateId;

- (void)startRequestTimer;
- (void)addRequestingCustomSlotID:(id)a0;
- (void)stopRequestTimer;
- (void)handleRequestTimer;
- (id)initWithRequestId:(id)a0 publishModel:(id)a1;
- (void)handleRequestError:(id)a0;
- (void)didFinishCustomSlot:(id)a0 requestResults:(id)a1 requestError:(id)a2;
- (void)requestTTSResultsWithSlotInfos:(id)a0;
- (void).cxx_destruct;

@end
