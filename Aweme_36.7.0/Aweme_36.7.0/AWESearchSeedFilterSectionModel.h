@class NSString, NSArray, NSDictionary;

@interface AWESearchSeedFilterSectionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long defaultIndex;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDictionary *searchNilText;
@property (copy, nonatomic) NSDictionary *searchLessText;
@property (copy, nonatomic) NSString *logName;
@property (readonly, nonatomic) NSArray *words;
@property (readonly, nonatomic) NSString *currentValue;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
