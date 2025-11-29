@class TingStartPlayProcessContext, MMListenCheckSpamResponse, TingGetLinkInfo, TingPlayItem, TingItem;

@interface TingPlayerContext : WXPBGeneratedMessage

@property (retain, nonatomic) TingItem *playingItem;
@property (retain, nonatomic) TingItem *originalItem;
@property (retain, nonatomic) TingGetLinkInfo *getLinkInfo;
@property (retain, nonatomic) TingPlayItem *playItem;
@property (retain, nonatomic) MMListenCheckSpamResponse *checkSpamResponse;
@property (retain, nonatomic) TingStartPlayProcessContext *startPlayProcessContext;

+ (void)initialize;

@end
