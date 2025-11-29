@class NSString;

@interface IESECGoodsDetailCampaignPurchaseQualificationModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL havePurchaseQualification;
@property (copy, nonatomic) NSString *notifyEventName;
@property (copy, nonatomic) NSString *notifyEventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
