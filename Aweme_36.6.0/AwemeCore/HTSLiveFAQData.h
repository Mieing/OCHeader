@class NSString;

@interface HTSLiveFAQData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *question;
@property (copy, nonatomic) NSString *answer;

+ (id)descriptor;

@end
