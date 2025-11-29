@class NSString;

@interface WindowsPrompt_WindowsButton : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchemaURL;

+ (id)descriptor;

@end
