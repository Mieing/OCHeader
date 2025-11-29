@class NSString, NSNumber;

@interface BDXBridgeMainArchRequestCommonSubscribePopupMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *popId;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *themeMode;
@property (copy, nonatomic) NSString *mobParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
