@class NSString, HTSLiveText;

@interface IESLiveChatReplyRespInfo : IESLivePBBaseMessage

@property (nonatomic) long long replyMsgId;
@property (nonatomic) long long replyId;
@property (retain, nonatomic) HTSLiveText *replyText;
@property (nonatomic) BOOL hasReplyText;
@property (copy, nonatomic) NSString *replyUid;
@property (copy, nonatomic) NSString *replyWebcastUid;

+ (id)descriptor;

@end
