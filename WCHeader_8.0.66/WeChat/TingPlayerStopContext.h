@class TingPlayTaskStopContext;

@interface TingPlayerStopContext : WXPBGeneratedMessage

@property (retain, nonatomic) TingPlayTaskStopContext *taskContext;
@property (nonatomic) unsigned int playerStopReason;

+ (void)initialize;

@end
