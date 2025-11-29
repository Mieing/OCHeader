@class NSString, NSNumber;

@interface BDXBridgeSearchCardStatusChangeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *aweme_id;
@property (retain, nonatomic) NSNumber *aweme_index;
@property (copy, nonatomic) NSString *sessionid;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) id extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
