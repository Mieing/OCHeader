@class NSString, NSNumber, NSDictionary;

@interface BDXBridgePoiOpenPreviewPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *traceSessionId;
@property (retain, nonatomic) NSNumber *defaultIndex;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSNumber *useDefaultBounce;
@property (copy, nonatomic) NSDictionary *logParams;
@property (copy, nonatomic) NSDictionary *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
