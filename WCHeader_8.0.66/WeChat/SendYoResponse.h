@interface SendYoResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) unsigned int serverTime;
@property (nonatomic) unsigned long long msgId;

+ (void)initialize;

@end
