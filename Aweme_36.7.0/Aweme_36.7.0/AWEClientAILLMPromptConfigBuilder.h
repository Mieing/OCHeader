@class NSString;

@interface AWEClientAILLMPromptConfigBuilder : NSObject

@property (copy, nonatomic) NSString *bos;
@property (copy, nonatomic) NSString *systemTemplate;
@property (copy, nonatomic) NSString *userTemplate;
@property (copy, nonatomic) NSString *assistantTemplate;

- (void).cxx_destruct;
- (id)init;

@end
