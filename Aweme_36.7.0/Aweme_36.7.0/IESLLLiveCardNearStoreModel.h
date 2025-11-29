@class NSString;

@interface IESLLLiveCardNearStoreModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *distanceText;
@property (copy, nonatomic) NSString *poiTotalText;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *isShowDistantModule;
@property (copy, nonatomic) NSString *distantKm;
@property (copy, nonatomic) NSString *applicableStore;
@property (copy, nonatomic) NSString *isStoreNameShow;
@property (copy, nonatomic) NSString *deliveryTime;
@property (copy, nonatomic) NSString *distanceInfoType;
@property (copy, nonatomic) NSString *poiTotalType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
