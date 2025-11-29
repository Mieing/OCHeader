@class HTSLiveStarwishGiftShowOrderItem;

@interface HTSLiveCurrentStarwishGiftShowOrderItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveStarwishGiftShowOrderItem *item;
@property (nonatomic) BOOL hasItem;

+ (id)descriptor;

@end
