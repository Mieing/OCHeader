@class NSNumber, NSString, AWETeenAgeScopeModel;

@interface AWETeenDeviceProfileEditResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *age;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *verifyType;
@property (retain, nonatomic) AWETeenAgeScopeModel *ageScopeInfo;

+ (id)ageScopeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
