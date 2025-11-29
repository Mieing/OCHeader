@class ShopItemIDUnit;

@interface FinderLiveModShelfDeleteReplayCmd : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) ShopItemIDUnit *item;

+ (void)initialize;

@end
