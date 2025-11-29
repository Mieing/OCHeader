@class NSString;

@interface HTSLiveEventParamInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *paramKeyName;
@property (nonatomic) int paramType;

+ (id)descriptor;

@end
