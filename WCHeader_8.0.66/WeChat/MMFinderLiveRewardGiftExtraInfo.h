@class MMFinderLiveRewardGiftItem, MMFinderLiveRewardAppMsgInfo;

@interface MMFinderLiveRewardGiftExtraInfo : NSObject

@property (nonatomic) BOOL ignoreMultiAnimation;
@property (nonatomic) BOOL ignoreCustomize;
@property (nonatomic) BOOL customizeRelyOnSelect;
@property (nonatomic) BOOL isLandscapeStyle;
@property (retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsg;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *customizePriorRewardItem;
@property (nonatomic) BOOL ignoreTextNewCustomize;

- (id)init;
- (void)initDefaultData;
- (void)printDesc;
- (id)description;
- (void).cxx_destruct;

@end
