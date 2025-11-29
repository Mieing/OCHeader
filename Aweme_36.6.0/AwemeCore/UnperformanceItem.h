@class NSString;

@interface UnperformanceItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scheduledText;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long subscribeCnt;
@property (copy, nonatomic) NSString *subscribeCntStr;
@property (copy, nonatomic) NSString *reason;

+ (id)descriptor;

@end
