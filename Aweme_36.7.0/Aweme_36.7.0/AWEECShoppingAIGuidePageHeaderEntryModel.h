@class NSArray, NSString;

@interface AWEECShoppingAIGuidePageHeaderEntryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
