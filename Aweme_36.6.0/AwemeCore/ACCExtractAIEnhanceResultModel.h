@class NSArray, ACCExtractAIEnhanceTag, NSString, ACCExtractAIEnhanceAip;

@interface ACCExtractAIEnhanceResultModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *resourceIds;
@property (retain, nonatomic) ACCExtractAIEnhanceAip *aip;
@property (retain, nonatomic) ACCExtractAIEnhanceTag *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
