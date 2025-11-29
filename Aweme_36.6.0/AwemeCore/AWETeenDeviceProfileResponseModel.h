@class NSString, AWETeenAgeScopeModel;

@interface AWETeenDeviceProfileResponseModel : AWEBaseApiModel

@property (nonatomic) long long age;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSString *birthday;
@property (retain, nonatomic) AWETeenAgeScopeModel *ageScopeInfo;

+ (id)ageScopeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
