@class NSDictionary, NSString;

@interface AWEUGTaskProgressCoefficientConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *sceneCoefficientConfig;
@property (retain, nonatomic) NSDictionary *awemeTypeCoefficientConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
