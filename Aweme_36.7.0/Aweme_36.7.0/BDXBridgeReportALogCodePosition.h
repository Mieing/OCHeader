@class NSString, NSNumber;

@interface BDXBridgeReportALogCodePosition : BDXBridgeModel

@property (copy, nonatomic) NSString *file;
@property (copy, nonatomic) NSString *function;
@property (retain, nonatomic) NSNumber *line;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
