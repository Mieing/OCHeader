@class NSString, NSNumber, NSArray;

@interface BDXBridgeDcardUpdateStatsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSNumber *isDislike;
@property (retain, nonatomic) NSNumber *isSkip;
@property (retain, nonatomic) NSNumber *lastSelectTimestamp;
@property (retain, nonatomic) NSArray *poiIDs;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
