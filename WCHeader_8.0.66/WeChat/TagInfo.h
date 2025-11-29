@class NSString, Color;

@interface TagInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int score;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) Color *color;

+ (void)initialize;

@end
