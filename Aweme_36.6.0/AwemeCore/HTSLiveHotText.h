@class NSString;

@interface HTSLiveHotText : IESLivePBBaseMessage

@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *textContent;

+ (id)descriptor;

@end
