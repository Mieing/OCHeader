@class HTSLiveUser, NSString, HTSLiveText, HTSLiveImage, ChatResponse_LandscapeAreaCommon, IESLiveChatReplyRespInfo, HTSLiveChatMentionInfo;

@interface ChatResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (copy, nonatomic) NSString *msgIdStr;
@property (copy, nonatomic) NSString *fullscreenTextColor;
@property (retain, nonatomic) ChatResponse_LandscapeAreaCommon *landscapeAreaCommon;
@property (nonatomic) BOOL hasLandscapeAreaCommon;
@property (nonatomic) int showIdentity;
@property (retain, nonatomic) HTSLiveImage *identityLabel;
@property (nonatomic) BOOL hasIdentityLabel;
@property (retain, nonatomic) IESLiveChatReplyRespInfo *replyResp;
@property (nonatomic) BOOL hasReplyResp;
@property (retain, nonatomic) HTSLiveText *rtfContentV2;
@property (nonatomic) BOOL hasRtfContentV2;
@property (retain, nonatomic) HTSLiveChatMentionInfo *mentionInfo;
@property (nonatomic) BOOL hasMentionInfo;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
