@class NSString;

@interface ConfCallBeginInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *subAppid;
@property (nonatomic) unsigned int selfRole;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned long long inviteId;

+ (void)initialize;

@end
