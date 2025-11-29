@class NSString, NSDictionary, BDARPopupRewardModel, BDARCloseButtonModel, NSNumber;

@interface BDAMoreRewardDisplayInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *item;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSNumber *hasNextReward;
@property (copy, nonatomic) NSDictionary *rewardStageInfo;
@property (copy, nonatomic) NSString *amountType;
@property (copy, nonatomic) NSDictionary *moreRewardResponseDic;
@property (copy, nonatomic) NSString *experience;
@property (retain, nonatomic) BDARPopupRewardModel *oneMoreModal;
@property (retain, nonatomic) BDARPopupRewardModel *retentionModal;
@property (retain, nonatomic) BDARCloseButtonModel *closeButtonModal;

- (void).cxx_destruct;

@end
