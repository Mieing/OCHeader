@class NSString, NSArray;

@interface BDXBridgeDcardTestFreqControlMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSArray *poiIds;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
