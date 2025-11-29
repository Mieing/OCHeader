@class NSString;

@interface Media : IESLivePBBaseMessage

@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *URL;

+ (id)descriptor;

@end
