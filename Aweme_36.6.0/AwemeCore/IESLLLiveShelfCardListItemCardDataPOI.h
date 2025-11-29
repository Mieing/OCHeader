@class NSString, NSNumber;

@interface IESLLLiveShelfCardListItemCardDataPOI : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shopInfo;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiCity;
@property (copy, nonatomic) NSString *poiDistrict;
@property (copy, nonatomic) NSString *userDistance;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *userLocateScene;
@property (copy, nonatomic) NSNumber *storeNumbers;
@property (copy, nonatomic) NSNumber *cityNumbers;
@property (copy, nonatomic) NSString *deliveryText;
@property (copy, nonatomic) NSString *deliveryTime;
@property (copy, nonatomic) NSString *distanceInfoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
