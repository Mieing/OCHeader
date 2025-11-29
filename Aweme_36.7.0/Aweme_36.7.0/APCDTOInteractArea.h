@class NSArray, NSString;

@interface APCDTOInteractArea : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *areas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)areasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
