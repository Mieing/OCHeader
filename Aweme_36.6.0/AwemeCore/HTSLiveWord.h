@class NSString;

@interface HTSLiveWord : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
