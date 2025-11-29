@class NSString, NSDictionary;

@interface AWEUGPendantActivityConfigSideBarCaption : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconDarkURL;
@property (copy, nonatomic) NSString *iconLightURL;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *sideCardID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
