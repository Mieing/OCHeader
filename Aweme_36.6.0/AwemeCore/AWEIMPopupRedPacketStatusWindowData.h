@class NSString, NSNumber, AWEIMPopupRedPacketStatusRewardData;

@interface AWEIMPopupRedPacketStatusWindowData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popupKey;
@property (retain, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *secondTitle;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *actionURL;
@property (retain, nonatomic) NSNumber *createTime;
@property (copy, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) AWEIMPopupRedPacketStatusRewardData *rewardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rewardInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
