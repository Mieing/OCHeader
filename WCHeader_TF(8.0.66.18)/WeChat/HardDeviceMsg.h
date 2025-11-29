@class SKBuiltinBuffer_t;

@interface HardDeviceMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
