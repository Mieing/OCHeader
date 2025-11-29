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

- (void)setFeaturedExposed:(BOOL)a0;
- (BOOL)featuredExposed;
- (void)setAppMsg:(id)a0;
- (id)appMsg;
- (void)setVideo:(id)a0;
- (id)video;
- (void)setVoice:(id)a0;
- (id)voice;
- (void)setImage:(id)a0;
- (id)image;
- (void)setText:(id)a0;
- (id)text;
- (void)setBaseInfo:(id)a0;
- (id)baseInfo;

@end
