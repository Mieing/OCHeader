@class NSString, NSDictionary;

@interface AWEECShoppingAIGuideLynxCardSettingModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *templateType;
@property (nonatomic) long long preloadCount;
@property (nonatomic) long long estimateHeight;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
