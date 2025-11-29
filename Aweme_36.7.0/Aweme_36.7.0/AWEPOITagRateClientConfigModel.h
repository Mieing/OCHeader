@class NSString;

@interface AWEPOITagRateClientConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long containerWidth;
@property (nonatomic) unsigned long long containerHeight;
@property (copy, nonatomic) NSString *templateUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
