@class AffBizAppMsgInfo, AffBizVideoMsgInfo, AffBizTextMsgInfo, AffBizImageMsgInfo, AffBizVoiceMsgInfo, AffCommMsgBaseInfo;

@interface AffBizMessage : WXPBGeneratedMessage

@property (retain, nonatomic) AffCommMsgBaseInfo *baseInfo;
@property (retain, nonatomic) AffBizTextMsgInfo *text;
@property (retain, nonatomic) AffBizImageMsgInfo *image;
@property (retain, nonatomic) AffBizVoiceMsgInfo *voice;
@property (retain, nonatomic) AffBizVideoMsgInfo *video;
@property (retain, nonatomic) AffBizAppMsgInfo *appMsg;
@property (nonatomic) BOOL featuredExposed;
@property (nonatomic) unsigned int featuredType;

+ (void)initialize;

@end
