@class NSString;

@interface AWEPOIFrequencyControlModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long entity;
@property (nonatomic) long long showTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
