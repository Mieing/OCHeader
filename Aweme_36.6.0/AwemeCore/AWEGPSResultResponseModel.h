@class NSString, AWELocationDetailResponseModel;

@interface AWEGPSResultResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWELocationDetailResponseModel *location;
@property (copy, nonatomic) NSString *cityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
