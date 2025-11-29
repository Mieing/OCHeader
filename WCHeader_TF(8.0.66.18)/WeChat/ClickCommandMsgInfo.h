@class NSString;

@interface ClickCommandMsgInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long mid;
@property (nonatomic) unsigned int idx;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;

+ (void)initialize;

@end
