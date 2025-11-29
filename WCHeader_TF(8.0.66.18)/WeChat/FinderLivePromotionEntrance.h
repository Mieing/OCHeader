@class NSString, LiveWeappJumpInfo, PromptBubbleInfo, FinderJumpInfo;

@interface FinderLivePromotionEntrance : WXPBGeneratedMessage

@property (retain, nonatomic) LiveWeappJumpInfo *promotionMiniappInfo;
@property (retain, nonatomic) FinderJumpInfo *promotionLiteappInfo;
@property (retain, nonatomic) PromptBubbleInfo *anchorDiscountPromptBubbleInfo;
@property (retain, nonatomic) NSString *anchorDiscountWording;

+ (void)initialize;

@end
