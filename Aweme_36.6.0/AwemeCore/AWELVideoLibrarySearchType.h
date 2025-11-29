@class NSArray, NSString;

@interface AWELVideoLibrarySearchType : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *searchCategoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchCategoryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
