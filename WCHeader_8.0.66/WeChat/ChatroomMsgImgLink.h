@class NSString, JumpInfo;

@interface ChatroomMsgImgLink : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *picUrl;
@property (nonatomic) unsigned int playtime;
@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (nonatomic) unsigned int picWidth;
@property (nonatomic) unsigned int picHeight;

+ (void)initialize;

@end
