@class NSString;

@interface AWEProfilePromptModel : AWEBaseApiModel

@property (nonatomic) unsigned long long code;
@property (nonatomic) BOOL hasPrompt;
@property (copy, nonatomic) NSString *prompt;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
