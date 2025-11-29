@class NSString;

@interface AWEPlayInteractionGenericButtonAnimationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
