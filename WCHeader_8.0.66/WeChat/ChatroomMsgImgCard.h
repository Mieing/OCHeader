@class NSString, JumpInfo;

@interface ChatroomMsgImgCard : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) JumpInfo *imgJumpInfo;
@property (nonatomic) BOOL showVideoPlay;

+ (void)initialize;

@end
