@class NSString;

@interface HTSLiveIdentifierNode : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *value;

+ (id)descriptor;

@end
