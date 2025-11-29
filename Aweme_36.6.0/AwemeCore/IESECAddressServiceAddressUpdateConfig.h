@class NSString;

@interface IESECAddressServiceAddressUpdateConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long offsetDistance;
@property (nonatomic) long long noGpsRequestInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
