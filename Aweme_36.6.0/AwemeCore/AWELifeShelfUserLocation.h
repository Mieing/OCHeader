@class NSString;

@interface AWELifeShelfUserLocation : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *cityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
