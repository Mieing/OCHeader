@class NSString;

@interface AWEClientAILLMPromptBuilder : NSObject

@property (copy, nonatomic) NSString *bos;
@property (copy, nonatomic) NSString *systemTemplate;
@property (copy, nonatomic) NSString *userTemplate;
@property (copy, nonatomic) NSString *assistantTemplate;
@property (readonly, copy, nonatomic) NSString *assistantPrefix;
@property (readonly, copy, nonatomic) NSString *assistantSuffix;
@property (copy, nonatomic) NSString *systemPrompt;

+ (id)defaultBuilder;

- (id)applyTemplateWithInputs:(id)a0 addAssistantPrefix:(BOOL)a1;
- (id)initWithConfigBuilder:(id /* block */)a0;
- (id)buildPrompt:(id)a0 withTemplate:(id)a1;
- (id)getAssistantSuffix;
- (id)applyTemplateWithUserContent:(id)a0 addSystemPrompt:(BOOL)a1 addAssistantPrefix:(BOOL)a2;
- (void).cxx_destruct;

@end
