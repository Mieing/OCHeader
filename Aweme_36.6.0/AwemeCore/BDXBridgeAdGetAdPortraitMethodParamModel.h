@class NSString, NSArray;

@interface BDXBridgeAdGetAdPortraitMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *portraitGroup;
@property (copy, nonatomic) NSString *portraitName;
@property (retain, nonatomic) NSArray *portraitList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
