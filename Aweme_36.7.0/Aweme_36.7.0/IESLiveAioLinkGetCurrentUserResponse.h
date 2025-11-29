@class HTSLiveUser;

@interface IESLiveAioLinkGetCurrentUserResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;

+ (id)descriptor;

@end
