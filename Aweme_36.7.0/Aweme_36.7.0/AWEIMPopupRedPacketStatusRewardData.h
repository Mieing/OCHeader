@class NSNumber, NSString;

@interface AWEIMPopupRedPacketStatusRewardData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rewardType;
@property (retain, nonatomic) NSNumber *rewardAmount;
@property (copy, nonatomic) NSString *rewardDesc;
@property (copy, nonatomic) NSString *rewardText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
