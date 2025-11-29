@class NSString, TingPlayerContext, TingItem;

@interface TingAudioFocusRequestContext : WXPBGeneratedMessage

@property (nonatomic) int operation;
@property (retain, nonatomic) TingItem *tingItem;
@property (retain, nonatomic) TingPlayerContext *playerContext;
@property (retain, nonatomic) NSString *identifier;

+ (void)initialize;

@end
