@class NSString, NSDictionary, BDXBridgeHunterRequestAwemeHunterConfig, NSNumber;

@interface BDXBridgeHunterRequestAwemeMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL addCommonParams;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) id body;
@property (retain, nonatomic) NSNumber *useUIThread;
@property (retain, nonatomic) NSNumber *usePrefetch;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) BDXBridgeHunterRequestAwemeHunterConfig *hunterConfig;
@property (nonatomic) long long bodyType;

+ (id)requiredKeyPaths;
+ (id)bodyTypeJSONTransformer;
+ (id)hunterConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
