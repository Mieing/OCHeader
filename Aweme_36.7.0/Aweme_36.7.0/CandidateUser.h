@class NSString;

@interface CandidateUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *secUserId;

+ (id)descriptor;

@end
