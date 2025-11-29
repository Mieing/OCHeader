@class NSString, MMFinderLiveRewardGiftItem;

@interface MMFinderLiveRecommendUserSendGiftInfo : NSObject

@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) NSString *wording;

- (id)initWithRecommendUserSendGiftInfoResp:(id)a0;
- (void)copyFromRecommendUserSendGiftInfoResp:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
