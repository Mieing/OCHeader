@class NSString;

@interface CountDown : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *endText;

+ (id)descriptor;

@end
