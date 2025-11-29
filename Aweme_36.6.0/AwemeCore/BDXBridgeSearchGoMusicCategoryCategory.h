@class NSString, NSDictionary;

@interface BDXBridgeSearchGoMusicCategoryCategory : BDXBridgeModel

@property (copy, nonatomic) NSString *category_id;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *icon;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
