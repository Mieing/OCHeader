@class NSString;

@interface AWEAwemeEnhanceTreatment : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long duration;
@property (nonatomic) long long amount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
