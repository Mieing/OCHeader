@class NSString;

@interface PromptInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *promptText;
@property (retain, nonatomic) NSString *jumpText;
@property (retain, nonatomic) NSString *jumpUrl;

+ (void)initialize;

@end
