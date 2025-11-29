@interface VoipUserStatus : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned int userStatus;

+ (void)initialize;

@end
