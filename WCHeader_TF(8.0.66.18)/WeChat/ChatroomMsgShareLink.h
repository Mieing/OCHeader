@class NSString, JumpInfo;

@interface ChatroomMsgShareLink : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) JumpInfo *jumpInfo;

+ (void)initialize;

@end
