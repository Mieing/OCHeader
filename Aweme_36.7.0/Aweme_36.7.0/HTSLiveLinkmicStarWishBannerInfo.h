@class NSMutableArray, HTSLiveLinkmicStarWishInfo;

@interface HTSLiveLinkmicStarWishBannerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicStarWishInfo *starwishInfo;
@property (nonatomic) BOOL hasStarwishInfo;
@property (retain, nonatomic) NSMutableArray *showUserIdsArray;
@property (readonly, nonatomic) unsigned long long showUserIdsArray_Count;

+ (id)descriptor;

@end
