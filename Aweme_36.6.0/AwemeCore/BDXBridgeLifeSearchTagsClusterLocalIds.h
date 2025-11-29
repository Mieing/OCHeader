@class NSString, NSNumber;

@interface BDXBridgeLifeSearchTagsClusterLocalIds : BDXBridgeModel

@property (copy, nonatomic) NSString *localId;
@property (retain, nonatomic) NSNumber *vidaScore;
@property (retain, nonatomic) NSNumber *score;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
