@class NSString, NSArray, AWEClientAILLMPromptBuilder, NSDictionary, AWEClientAILLMTask;

@interface AWEClientAILLMRequest : NSObject

@property (weak, nonatomic) AWEClientAILLMTask *relatedTask;
@property (nonatomic) long long timeoutMs;
@property (nonatomic) BOOL skipWhileEngineBusy;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *chatMessages;
@property (retain, nonatomic) AWEClientAILLMPromptBuilder *promptBuilder;
@property (copy, nonatomic) NSString *sceneModelName;
@property (copy, nonatomic) NSDictionary *inferenceParams;
@property (copy, nonatomic) id /* block */ tokenCallback;
@property (copy, nonatomic) id /* block */ completion;

- (id)getFinalPrompt;
- (void).cxx_destruct;

@end
