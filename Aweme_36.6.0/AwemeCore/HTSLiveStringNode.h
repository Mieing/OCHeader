@class NSString;

@interface HTSLiveStringNode : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *value;

+ (id)descriptor;

@end
