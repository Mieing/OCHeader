@class NSString, HTSLiveText, HTSLiveUser;

@interface HTSLiveLinkerPrepareInviteContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (nonatomic) long long fromRoomId;
@property (copy, nonatomic) NSString *toUserId;
@property (retain, nonatomic) HTSLiveUser *invitorUser;
@property (nonatomic) BOOL hasInvitorUser;
@property (retain, nonatomic) HTSLiveText *content;
@property (nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *subTitle;

+ (id)descriptor;

@end
