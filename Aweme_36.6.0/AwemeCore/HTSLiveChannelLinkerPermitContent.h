@class NSString;

@interface HTSLiveChannelLinkerPermitContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *applicantUserId;
@property (copy, nonatomic) NSString *approverUserId;
@property (nonatomic) int permitResult;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *applicantSecUserId;
@property (copy, nonatomic) NSString *approverSecUserId;

+ (id)descriptor;

@end
