@class NSString;

@interface SendOpenIMVerifyReplyReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tpUsername;
@property (retain, nonatomic) NSString *replyContent;
@property (retain, nonatomic) NSString *antispamTicket;

+ (void)initialize;

@end
