@class NSArray, NSString;

@interface AWEPastMemoriesMaterialResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *awemeModels;
@property (retain, nonatomic) NSArray *themeModels;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeModelsJSONTransformer;
+ (id)themeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
