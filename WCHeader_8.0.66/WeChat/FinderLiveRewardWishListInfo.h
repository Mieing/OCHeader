@class NSString, NSMutableArray;

@interface FinderLiveRewardWishListInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL enableFlag;
@property (nonatomic) unsigned long long totalTargetCount;
@property (nonatomic) unsigned long long totalCurCount;
@property (retain, nonatomic) NSString *bannerWords;
@property (retain, nonatomic) NSString *bannerIconUrl;
@property (retain, nonatomic) NSMutableArray *wishList;
@property (retain, nonatomic) NSString *wishListId;

+ (void)initialize;

@end
