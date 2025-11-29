@class IESLiveClientLLMASRAgentMonitor, NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, IESLiveClientAIService;

@interface IESLiveClientLLMASRAgent : NSObject <IESLiveClientLLMASRAgentService>

@property (copy, nonatomic) NSString *currentASR;
@property (retain, nonatomic) NSMutableArray *recentASR;
@property (nonatomic) long long asrIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asrSyncQueue;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) IESLiveClientLLMASRAgentMonitor *monitor;
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

- (void)startASRAgent;
- (void)stopASRAgent;
- (void)summaryAnchorSpeechWithClientLLM:(id)a0;
- (id)currentAudienceVCRoomModel;
- (void)initClientLLM;
- (void)runAgentMonitorPackage:(id)a0;
- (void)summaryAnchorSpeechWithClientLLMQueue:(id)a0;
- (void)storeASRText:(id)a0;
- (void)sendSummarySEIWithOriginalText:(id)a0 llmOutput:(id)a1 securityOutput:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
