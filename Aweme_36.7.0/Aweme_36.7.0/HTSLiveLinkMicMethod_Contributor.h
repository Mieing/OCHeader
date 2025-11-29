@class NSString, HTSLiveUser;

@interface HTSLiveLinkMicMethod_Contributor : IESLivePBBaseMessage

@property (nonatomic) long long score;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;

+ (id)descriptor;

@end
