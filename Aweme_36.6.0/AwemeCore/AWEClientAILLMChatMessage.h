@class NSString;

@interface AWEClientAILLMChatMessage : NSObject

@property (nonatomic) long long role;
@property (copy, nonatomic) NSString *content;

+ (id)messageWithRole:(long long)a0 content:(id)a1;

- (void).cxx_destruct;

@end
