@class NSString;

@interface IESLiveAioLinkCoreCurrentUserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;

+ (id)descriptor;

@end
