@class ShopItemIDUnit;

@interface FinderLiveGetProductPromoteReplayWidgetReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned int reqSource;
@property (retain, nonatomic) ShopItemIDUnit *item;

+ (void)initialize;

@end
