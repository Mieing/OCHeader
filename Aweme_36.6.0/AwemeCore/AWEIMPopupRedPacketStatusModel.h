@class NSString, NSNumber, AWEIMPopupRedPacketStatusInnerData;

@interface AWEIMPopupRedPacketStatusModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *errorTips;
@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) AWEIMPopupRedPacketStatusInnerData *redPacketStatusData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)redPacketStatusDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
