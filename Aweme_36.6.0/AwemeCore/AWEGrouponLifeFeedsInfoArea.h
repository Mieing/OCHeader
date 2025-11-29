@class AWEGrouponLifeFeedsUserInfo, AWENearbyLifeDualAnchorInfo, AWEGrouponLifeFeedsRecommendReason, AWEGrouponLifeFeedsSaleInfo;

@interface AWEGrouponLifeFeedsInfoArea : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyLifeDualAnchorInfo *titleInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsRecommendReason *recommendReason;
@property (retain, nonatomic) AWEGrouponLifeFeedsUserInfo *userInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsSaleInfo *saleInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
