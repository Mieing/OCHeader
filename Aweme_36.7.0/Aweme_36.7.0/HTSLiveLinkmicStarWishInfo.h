@class NSString, NSMutableArray, HTSLiveStarWishPerformanceInfo;

@interface HTSLiveLinkmicStarWishInfo : IESLivePBBaseMessage

@property (nonatomic) long long playId;
@property (retain, nonatomic) NSMutableArray *playerInfoArray;
@property (readonly, nonatomic) unsigned long long playerInfoArray_Count;
@property (nonatomic) BOOL isGiftOpen;
@property (retain, nonatomic) NSMutableArray *starGiftsArray;
@property (readonly, nonatomic) unsigned long long starGiftsArray_Count;
@property (retain, nonatomic) HTSLiveStarWishPerformanceInfo *performanceInfo;
@property (nonatomic) BOOL hasPerformanceInfo;
@property (copy, nonatomic) NSString *dressId;

+ (id)descriptor;

@end
