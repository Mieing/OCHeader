@class StatusFooterJumpMusic, StatusFooterJumpFinderFeed;

@interface StatusFooterJumpRingtone : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) StatusFooterJumpMusic *music;
@property (retain, nonatomic) StatusFooterJumpFinderFeed *finder;

+ (void)initialize;

@end
