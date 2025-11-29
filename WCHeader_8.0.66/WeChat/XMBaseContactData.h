@class NSString;

@interface XMBaseContactData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *mailaddr;
@property (nonatomic) unsigned long long uin;

+ (void)initialize;

@end
