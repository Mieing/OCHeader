@class NSString, NSArray;

@interface ACCImageTemplateLimitationsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateVersion;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSArray *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
