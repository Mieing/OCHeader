@class ShopItemIDUnit;

@interface FinderLiveModShelfPinProductToTopCmd : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (nonatomic) BOOL cancel;
@property (retain, nonatomic) ShopItemIDUnit *item;

+ (void)initialize;

@end
