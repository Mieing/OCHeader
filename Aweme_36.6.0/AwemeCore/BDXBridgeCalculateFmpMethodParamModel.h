@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeCalculateFmpMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *containerInitTime;
@property (copy, nonatomic) NSString *page;
@property (retain, nonatomic) NSNumber *autoReport;
@property (copy, nonatomic) NSDictionary *extraTrackParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
