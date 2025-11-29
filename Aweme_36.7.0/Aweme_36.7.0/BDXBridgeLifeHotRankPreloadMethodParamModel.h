@class NSNumber, NSString;

@interface BDXBridgeLifeHotRankPreloadMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *initialCursor;
@property (copy, nonatomic) NSString *extraParams;
@property (retain, nonatomic) NSNumber *sceneType;
@property (retain, nonatomic) NSNumber *count;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
