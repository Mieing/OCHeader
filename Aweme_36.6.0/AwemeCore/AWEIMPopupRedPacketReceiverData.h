@class NSString, AWEIMPopupRedPacketStatusRewardData, AWEIMPopupRedPacketAdditionalRewardData;

@interface AWEIMPopupRedPacketReceiverData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) AWEIMPopupRedPacketStatusRewardData *rewardInfo;
@property (retain, nonatomic) AWEIMPopupRedPacketAdditionalRewardData *additionalReward;
@property (copy, nonatomic) NSString *applyTime;
@property (copy, nonatomic) NSString *profileSchema;
@property (nonatomic) BOOL isBestLucky;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rewardInfoJSONTransformer;
+ (id)additionalRewardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
