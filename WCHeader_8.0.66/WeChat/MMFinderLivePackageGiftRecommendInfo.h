@class NSString, MMFinderLiveRewardGiftItem, NSArray;

@interface MMFinderLivePackageGiftRecommendInfo : NSObject

@property (nonatomic) unsigned long long recommendType;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSArray *batchList;

- (id)initWithPackageGiftRecommendInfoResp:(id)a0;
- (void)copyFromPackageGiftRecommendInfoResp:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
