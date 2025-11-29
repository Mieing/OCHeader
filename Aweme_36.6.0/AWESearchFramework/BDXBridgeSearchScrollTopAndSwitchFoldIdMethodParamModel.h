@class NSString, NSNumber;

@interface BDXBridgeSearchScrollTopAndSwitchFoldIdMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *fromFoldId;
@property (copy, nonatomic) NSString *toFoldId;
@property (retain, nonatomic) NSNumber *animation;
@property (retain, nonatomic) NSNumber *scrollToTop;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
