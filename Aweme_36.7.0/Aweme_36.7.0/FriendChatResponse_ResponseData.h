@class NSString, HTSLiveUser, HTSLiveText;

@interface FriendChatResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *msgIdStr;

+ (id)descriptor;

@end
