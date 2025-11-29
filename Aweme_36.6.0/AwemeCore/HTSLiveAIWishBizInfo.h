@class NSString;

@interface HTSLiveAIWishBizInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) int timeoutDuration;
@property (nonatomic) int waitDuraion;
@property (nonatomic) BOOL autoStop;

+ (id)descriptor;

@end
