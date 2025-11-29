@class AWEDeliveryChatDeliveryInfoModel, AWEDeliveryChatRiderPhoneInfoModel, NSString;

@interface AWEDeliveryChatTopInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDeliveryChatDeliveryInfoModel *deliveryInfo;
@property (retain, nonatomic) AWEDeliveryChatRiderPhoneInfoModel *riderPhoneInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
