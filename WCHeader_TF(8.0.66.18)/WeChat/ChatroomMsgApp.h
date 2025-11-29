@class NSString, Color, JumpInfo;

@interface ChatroomMsgApp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *des;
@property (retain, nonatomic) NSString *buttonDes;
@property (retain, nonatomic) NSString *bgPicUrl;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *secondDes;
@property (retain, nonatomic) Color *buttonBgColor;
@property (retain, nonatomic) JumpInfo *jumpInfo;

+ (void)initialize;

@end
