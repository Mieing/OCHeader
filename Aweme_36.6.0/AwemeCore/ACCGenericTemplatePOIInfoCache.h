@class CLLocation, AWEIESMediaCodeGenMaterialGetGeoInfoResponseModel;

@interface ACCGenericTemplatePOIInfoCache : NSObject <NSCoding>

@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) AWEIESMediaCodeGenMaterialGetGeoInfoResponseModel *model;
@property (nonatomic) double currentTime;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
