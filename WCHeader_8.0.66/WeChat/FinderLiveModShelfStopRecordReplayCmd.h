@class ShopItemIDUnit;

@interface FinderLiveModShelfStopRecordReplayCmd : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) ShopItemIDUnit *item;

+ (void)initialize;

@end
