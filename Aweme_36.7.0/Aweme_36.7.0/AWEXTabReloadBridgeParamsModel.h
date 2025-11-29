@class NSString, NSNumber;

@interface AWEXTabReloadBridgeParamsModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isPrerender;
@property (retain, nonatomic) NSNumber *availableMemoryThreshold;
@property (nonatomic) BOOL onIdle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
