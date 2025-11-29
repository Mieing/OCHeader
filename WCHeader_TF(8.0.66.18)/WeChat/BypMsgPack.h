@class NSData, BypMsgSysCmd, NSString, BypMsgText, BypMsgImage, BypMsgEmoji, BypMsgAppMsg, BypMsgVideo;

@interface BypMsgPack : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *cliMsgId;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSData *msgExtInfo;
@property (retain, nonatomic) NSString *msgSessionId;
@property (retain, nonatomic) BypMsgText *bypText;
@property (retain, nonatomic) BypMsgImage *bypImage;
@property (retain, nonatomic) BypMsgVideo *bypVideo;
@property (retain, nonatomic) BypMsgAppMsg *bypAppmsg;
@property (retain, nonatomic) BypMsgSysCmd *bypSyscmd;
@property (retain, nonatomic) BypMsgEmoji *bypEmoji;

+ (void)initialize;

@end
