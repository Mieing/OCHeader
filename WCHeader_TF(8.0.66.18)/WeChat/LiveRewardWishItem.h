@class FinderLiveGift;

@interface LiveRewardWishItem : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveGift *gift;
@property (nonatomic) unsigned long long productTargetCount;
@property (nonatomic) unsigned long long productCurCount;

+ (void)initialize;

@end
