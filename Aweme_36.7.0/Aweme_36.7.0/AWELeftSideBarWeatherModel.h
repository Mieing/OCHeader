@class NSNumber, NSString;

@interface AWELeftSideBarWeatherModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *temperature;
@property (copy, nonatomic) NSString *weather;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
