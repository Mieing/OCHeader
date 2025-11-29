@class NSString, NSArray, NSDictionary;

@interface BDXBridgeMainArchOpenDoubleColumnTabList : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *pinnedAwemes;
@property (copy, nonatomic) NSDictionary *requestParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
