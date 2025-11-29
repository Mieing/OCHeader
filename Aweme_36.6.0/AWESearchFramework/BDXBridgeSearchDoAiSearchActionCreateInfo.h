@class NSString, NSArray;

@interface BDXBridgeSearchDoAiSearchActionCreateInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *panelTitle;
@property (retain, nonatomic) NSArray *genreList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
