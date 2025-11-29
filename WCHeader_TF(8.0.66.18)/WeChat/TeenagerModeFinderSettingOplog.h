@class SKBuiltinBuffer_t;

@interface TeenagerModeFinderSettingOplog : WXPBGeneratedMessage

@property (nonatomic) unsigned int setting;
@property (retain, nonatomic) SKBuiltinBuffer_t *ticket;
@property (nonatomic) unsigned int ticketType;

+ (void)initialize;

@end
