@class AWELifeFeedsRecommendReason, AWELifeFeedsUserInfo, AWENearbyLifeDualAnchorInfo;

@interface AWELifeFeedsInfoArea : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyLifeDualAnchorInfo *titleInfo;
@property (retain, nonatomic) AWELifeFeedsRecommendReason *recommendReason;
@property (retain, nonatomic) AWELifeFeedsUserInfo *userInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
