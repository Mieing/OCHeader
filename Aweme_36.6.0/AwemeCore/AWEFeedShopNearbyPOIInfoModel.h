@class AWEPOITypeModel, NSString, AWEAddressModel, AWEURLModel;

@interface AWEFeedShopNearbyPOIInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *nearbyPoiId;
@property (copy, nonatomic) NSString *nearbyPoiName;
@property (copy, nonatomic) NSString *cost;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSString *distance;
@property (retain, nonatomic) AWEAddressModel *addressInfo;
@property (retain, nonatomic) AWEPOITypeModel *backendType;
@property (retain, nonatomic) AWEURLModel *headImg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
