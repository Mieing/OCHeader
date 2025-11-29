@class NSMutableArray, BaseResponse;

@interface FinderLiveRewardFreeGiftResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *succGiftIds;
@property (retain, nonatomic) NSMutableArray *failItems;

+ (void)initialize;

@end
