@class ShopItemIDUnitModel;

@interface ShopItemIDUnit : WXPBGeneratedMessage

@property (readonly, copy, nonatomic) ShopItemIDUnitModel *model;
@property (nonatomic) unsigned long long itemId;
@property (nonatomic) unsigned int itemType;

+ (void)initialize;

@end
