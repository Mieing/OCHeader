@class NSArray, NSString;

@interface IESECWinHybridCategoryModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSArray *categoryList;
@property (readonly, copy, nonatomic) NSString *selectCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
