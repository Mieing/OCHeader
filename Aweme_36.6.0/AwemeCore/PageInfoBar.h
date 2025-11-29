@class NSString;

@interface PageInfoBar : IESLivePBBaseMessage

@property (nonatomic) long long current;
@property (nonatomic) long long target;
@property (copy, nonatomic) NSString *barColor;

+ (id)descriptor;

@end
