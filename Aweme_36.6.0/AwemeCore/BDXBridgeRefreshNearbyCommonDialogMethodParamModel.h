@class NSNumber, NSString, NSArray;

@interface BDXBridgeRefreshNearbyCommonDialogMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *refreshPageType;
@property (retain, nonatomic) NSNumber *refreshAction;
@property (copy, nonatomic) NSString *extraRequestParam;
@property (copy, nonatomic) NSString *refreshScene;
@property (retain, nonatomic) NSNumber *feedPartlyRefresh;
@property (retain, nonatomic) NSArray *refreshResourceType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
