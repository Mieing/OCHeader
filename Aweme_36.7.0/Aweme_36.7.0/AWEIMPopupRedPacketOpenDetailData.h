@class NSString, AWEIMPopupRedPacketStatusRewardData, NSArray;

@interface AWEIMPopupRedPacketOpenDetailData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bgImgURL;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSString *senderAvatarURL;
@property (copy, nonatomic) NSString *greeting;
@property (retain, nonatomic) AWEIMPopupRedPacketStatusRewardData *rewardInfo;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *applyText;
@property (nonatomic) BOOL hasRedPacket;
@property (copy, nonatomic) NSString *bottomTips;
@property (copy, nonatomic) NSString *profitSchema;
@property (copy, nonatomic) NSString *profitText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSArray *applyRecords;
@property (nonatomic) BOOL canShowProfitEntrance;
@property (nonatomic) BOOL canShowSendButton;
@property (nonatomic) BOOL isColdLaunchFreeRedPacket;
@property (copy, nonatomic) NSString *expireText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rewardInfoJSONTransformer;
+ (id)applyRecordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
