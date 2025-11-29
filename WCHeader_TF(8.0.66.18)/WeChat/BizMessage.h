@class BizImageMsgInfo, BizVoiceMsgInfo, BizVideoMsgInfo, CommMsgBaseInfo, BizAppMsgInfo, BizTextMsgInfo;

@interface BizMessage : WXPBGeneratedMessage

@property (retain, nonatomic) CommMsgBaseInfo *baseInfo;
@property (retain, nonatomic) BizTextMsgInfo *text;
@property (retain, nonatomic) BizImageMsgInfo *image;
@property (retain, nonatomic) BizVoiceMsgInfo *voice;
@property (retain, nonatomic) BizVideoMsgInfo *video;
@property (retain, nonatomic) BizAppMsgInfo *appMsg;
@property (nonatomic) BOOL featuredExposed;

+ (void)initialize;

@end
