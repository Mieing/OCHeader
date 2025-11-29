@class TingPlayerEventContext;

@interface TingPlayerPendingEvent : WXPBGeneratedMessage

@property (nonatomic) int event;
@property (retain, nonatomic) TingPlayerEventContext *eventContext;

+ (void)initialize;

@end
