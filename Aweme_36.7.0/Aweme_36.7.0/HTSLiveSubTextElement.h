@class NSString;

@interface HTSLiveSubTextElement : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
