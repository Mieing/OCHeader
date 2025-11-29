@class NSString;

@interface AWEPlayInteractionGenericButtonFrequencyConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long period;
@property (nonatomic) long long times;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
