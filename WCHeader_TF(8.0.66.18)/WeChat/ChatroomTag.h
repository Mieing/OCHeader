@class NSString, Color, JumpInfo;

@interface ChatroomTag : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) Color *backgroundColor;
@property (retain, nonatomic) Color *color;
@property (retain, nonatomic) JumpInfo *tagJumpInfo;
@property (nonatomic) unsigned long long tagId;
@property (nonatomic) BOOL bold;

+ (void)initialize;

@end
