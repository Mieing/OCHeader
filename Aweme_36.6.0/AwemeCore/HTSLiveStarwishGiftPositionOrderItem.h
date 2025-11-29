@class NSMutableArray, HTSLiveUser;

@interface HTSLiveStarwishGiftPositionOrderItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long giftNum;
@property (retain, nonatomic) NSMutableArray *itemIdsArray;
@property (readonly, nonatomic) unsigned long long itemIdsArray_Count;

+ (id)descriptor;

@end
