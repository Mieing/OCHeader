@class AnchorGetPurchaseMicInfo, AudienceGetPurchaseMicInfo, BaseResponse;

@interface FinderLiveGetPurchaseMicInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) AnchorGetPurchaseMicInfo *purchaseMicInfoForAnchor;
@property (retain, nonatomic) AudienceGetPurchaseMicInfo *purchaseMicInfoForAudience;

+ (void)initialize;

@end
