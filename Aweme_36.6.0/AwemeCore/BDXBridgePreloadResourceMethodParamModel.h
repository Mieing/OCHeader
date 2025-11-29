@class NSString, NSDictionary, NSNumber;

@interface BDXBridgePreloadResourceMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *mainUrl;
@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSDictionary *subRes;
@property (copy, nonatomic) NSString *processType;
@property (nonatomic) BOOL usePreloadJson;
@property (retain, nonatomic) NSNumber *maxAge;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
