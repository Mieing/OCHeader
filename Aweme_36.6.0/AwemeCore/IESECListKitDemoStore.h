@class NSString;

@interface IESECListKitDemoStore : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *distancePoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
