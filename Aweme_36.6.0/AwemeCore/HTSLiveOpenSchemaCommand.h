@class NSString;

@interface HTSLiveOpenSchemaCommand : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *URL;

+ (id)descriptor;

@end
