@class NSString;

@interface WxaTemplateMsgEvent : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *formid;
@property (retain, nonatomic) NSString *pageid;
@property (nonatomic) int appstate;
@property (nonatomic) int appversion;

+ (void)initialize;

@end
