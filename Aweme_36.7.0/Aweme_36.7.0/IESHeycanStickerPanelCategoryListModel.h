@class NSArray, NSString;

@interface IESHeycanStickerPanelCategoryListModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
