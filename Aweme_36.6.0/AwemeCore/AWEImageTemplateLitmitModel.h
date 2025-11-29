@class NSString, NSArray, NSDictionary;

@interface AWEImageTemplateLitmitModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateVersion;
@property (copy, nonatomic) NSArray *templateFeatures;
@property (copy, nonatomic) NSString *templatePlatform;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
