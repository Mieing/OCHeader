@class NSString, NSTimer, NSDictionary, IESLiveClientLLMMessageAgentMonitor, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, IESLiveClientAIService;

@interface IESLiveClientLLMMessageAgent : NSObject <IESLiveClientLLMMessageAgentService>

@property (retain, nonatomic) NSMutableArray *recentMessages;
@property (nonatomic) long long newMessageCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageSyncQueue;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) IESLiveClientLLMMessageAgentMonitor *monitor;
@property (retain, nonatomic) NSTimer *messageTimer;
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

- (void)sendChatMessage:(id)a0 user:(id)a1 eventTime:(long long)a2;
- (void)startMessageAgent;
- (void)stopMessageAgent;
- (void)summaryMessageWithClientLLM;
- (id)currentAudienceVCRoomModel;
- (void)initClientLLM;
- (void)runAgentMonitorPackage:(id)a0;
- (void)sendMessageTopicSEIWithOriginalText:(id)a0 llmOutput:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
