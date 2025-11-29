@class NSData, TingTapeItem, TingItem;

@interface TingPlayTaskPlayingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) TingTapeItem *tapeItem;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) TingItem *playingItem;
@property (nonatomic) int playAppId;
@property (nonatomic) int event;
@property (retain, nonatomic) NSData *context;

+ (void)initialize;

@end
