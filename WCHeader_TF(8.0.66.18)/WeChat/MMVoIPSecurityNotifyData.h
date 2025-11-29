@interface MMVoIPSecurityNotifyData : WXPBGeneratedMessage

@property (nonatomic) int notifyType;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned int param;
@property (nonatomic) unsigned int deviceType;

+ (void)initialize;

@end
