@class IESLiveClientLLMAnchorPMAgentMonitor, NSString, IESLiveGCDTimer, NSDictionary, NSObject;
@protocol OS_dispatch_queue, IESLiveClientAIService;

@interface IESLiveClientLLMAnchorPMAgent : NSObject <IESLiveClientLLMAnchorPMAgentService>

@property (retain, nonatomic) IESLiveGCDTimer *anchorPMTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *anchorPMQueue;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) IESLiveClientLLMAnchorPMAgentMonitor *monitor;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *sceneModelName;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *systemPrompt;
@property (copy, nonatomic) NSString *userPrompt;
@property (retain, nonatomic) NSDictionary *inferenceParams;
@property (nonatomic) BOOL enableSEISummary;
@property (nonatomic) BOOL neverInfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)startAnchorPMAgent;
- (void)stopAnchorPMAgent;
- (id)currentAudienceVCRoomModel;
- (void)initClientLLM;
- (void)summaryAllWithClientLLMQueue;
- (void)runAgentMonitorPackage:(id)a0;
- (void)summaryAllWithClientLLM;
- (void).cxx_destruct;
- (id)init;

@end
