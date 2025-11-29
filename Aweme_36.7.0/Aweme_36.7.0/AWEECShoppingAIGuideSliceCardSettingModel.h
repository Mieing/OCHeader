@class NSString, NSDictionary;

@interface AWEECShoppingAIGuideSliceCardSettingModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSString *templateVersion;
@property (copy, nonatomic) NSString *templateUrl;
@property (copy, nonatomic) NSString *templateType;
@property (nonatomic) long long height;
@property (nonatomic) long long estimateHeight;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
