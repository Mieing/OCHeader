@class NSString, NSArray;

@interface AWECodeGenCollectionRowModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *rowname;
@property (nonatomic) int rowtype;
@property (copy, nonatomic) NSArray *memorycollectionsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
