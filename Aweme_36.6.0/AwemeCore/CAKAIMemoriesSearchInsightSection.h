@class NSString, NSArray;

@interface CAKAIMemoriesSearchInsightSection : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)sectionWithAssetRowModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackCategoryName;
- (void).cxx_destruct;

@end
