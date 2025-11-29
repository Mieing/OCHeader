@class ShopItemIDUnit;

@interface FinderLiveModShelfStartRecordReplayCmd : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) ShopItemIDUnit *item;

+ (void)initialize;

@end
