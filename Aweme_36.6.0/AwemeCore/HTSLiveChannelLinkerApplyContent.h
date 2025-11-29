@class NSString, HTSLiveUser;

@interface HTSLiveChannelLinkerApplyContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *applicantUserId;
@property (copy, nonatomic) NSString *applicantSecUserId;
@property (retain, nonatomic) HTSLiveUser *applicantUser;
@property (nonatomic) BOOL hasApplicantUser;

+ (id)descriptor;

@end
