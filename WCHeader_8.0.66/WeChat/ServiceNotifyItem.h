@class NSString;

@interface ServiceNotifyItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatarurl;

+ (void)initialize;

@end
