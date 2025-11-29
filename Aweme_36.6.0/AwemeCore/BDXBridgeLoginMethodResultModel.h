@class NSNumber;

@interface BDXBridgeLoginMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *alreadyLoggedIn;
@property (nonatomic) unsigned long long status;

+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
