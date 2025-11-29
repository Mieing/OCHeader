@class HTSLiveStarwishGiftPositionOrderItem;

@interface HTSLiveCurrentStarwishGiftPositionOrderItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveStarwishGiftPositionOrderItem *item;
@property (nonatomic) BOOL hasItem;

+ (id)descriptor;

@end
