@class AWEIMPopupRedPacketStatusRewardData, NSString;

@interface AWEIMPopupRedPacketAdditionalRewardData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMPopupRedPacketStatusRewardData *rewardInfo;
@property (copy, nonatomic) NSString *rewardPageSchema;
@property (nonatomic) long long additionalRewardReceiveStatus;
@property (copy, nonatomic) NSString *additionalRewardDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rewardInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
