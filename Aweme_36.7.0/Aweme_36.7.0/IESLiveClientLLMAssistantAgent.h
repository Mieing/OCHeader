@class NSString, NSDictionary, IESLiveClientLLMAssistantMonitor, NSObject;
@protocol OS_dispatch_queue, IESLiveClientAIService;

@interface IESLiveClientLLMAssistantAgent : NSObject <IESLiveClientLLMAssistantService>

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *textProcessQueue;
@property (retain, nonatomic) IESLiveClientLLMAssistantMonitor *monitor;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *sceneModelName;
@property (copy, nonatomic) NSString *systemPrompt;
@property (copy, nonatomic) NSString *userPrompt;
@property (retain, nonatomic) NSDictionary *inferenceParams;
@property (nonatomic) BOOL neverInfer;
@property (nonatomic) BOOL enableDispatchOutput;
@property (nonatomic) long long textIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)intentRecognitionWithClientLLM:(id)a0;
- (void)initClientLLM;
- (void)sendAnchorIntentWithOriginalText:(id)a0 llmOutput:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
