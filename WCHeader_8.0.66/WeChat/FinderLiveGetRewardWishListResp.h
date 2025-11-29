@class NSMutableArray, BaseResponse;

@interface FinderLiveGetRewardWishListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *wishList;
@property (nonatomic) unsigned long long totalTargetCount;
@property (nonatomic) unsigned long long totalCurCount;
@property (nonatomic) BOOL isAchieved;
@property (nonatomic) BOOL isActive;

+ (void)initialize;

@end
