@class Color, NSString, JumpInfo;

@interface Notification : WXPBGeneratedMessage

@property (retain, nonatomic) Color *wordColor;
@property (retain, nonatomic) Color *backgroundColor;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *leftIconUrl;
@property (retain, nonatomic) NSString *rightIconUrl;
@property (nonatomic) BOOL rightIconCanClose;
@property (nonatomic) unsigned int disappearSecond;
@property (nonatomic) unsigned int priority;
@property (nonatomic) unsigned int id;
@property (nonatomic) BOOL clickAfterClose;

+ (void)initialize;

@end
