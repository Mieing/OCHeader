@class NSString, NSDictionary;

@interface IESLiveClientAILLMRequest : NSObject <IESLiveClientAILLMRequestProtocol>

@property (nonatomic) long long timeoutMs;
@property (nonatomic) BOOL skipWhileEngineBusy;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *sceneModelName;
@property (copy, nonatomic) NSDictionary *inferenceParams;
@property (copy, nonatomic) id /* block */ tokenCallback;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *systemPrompt;
@property (copy, nonatomic) NSString *userPrompt;
@property (nonatomic) BOOL isdebug;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
