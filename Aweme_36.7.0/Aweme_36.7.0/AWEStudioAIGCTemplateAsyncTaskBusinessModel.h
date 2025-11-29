@class NSArray, NSDictionary, NSString;

@interface AWEStudioAIGCTemplateAsyncTaskBusinessModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *resourceModelList;
@property (nonatomic) long long actualRequestResourceCount;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
