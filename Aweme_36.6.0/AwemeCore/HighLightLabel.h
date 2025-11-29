@class NSString;

@interface HighLightLabel : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long status;

+ (id)descriptor;

@end
