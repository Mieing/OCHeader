@class NSString, AWECityDetailResponseModel;

@interface AWELocationDetailResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWECityDetailResponseModel *city;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)cityJSONTransformer;

- (void).cxx_destruct;

@end
