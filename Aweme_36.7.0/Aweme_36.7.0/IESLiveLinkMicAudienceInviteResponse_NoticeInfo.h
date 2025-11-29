@class NSString;

@interface IESLiveLinkMicAudienceInviteResponse_NoticeInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL needPush;
@property (nonatomic) long long appId;
@property (copy, nonatomic) NSString *action;

+ (id)descriptor;

@end
