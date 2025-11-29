@class NSString, NSArray, BDXBridgeLifeCreationEditMusic, BDXBridgeLifeCreationEditTrack, NSNumber, NSDictionary;

@interface BDXBridgeLifeCreationEditMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSNumber *hideEditToolbar;
@property (retain, nonatomic) NSNumber *autoPlay;
@property (retain, nonatomic) BDXBridgeLifeCreationEditTrack *track;
@property (retain, nonatomic) NSArray *instances;
@property (retain, nonatomic) BDXBridgeLifeCreationEditMusic *music;
@property (copy, nonatomic) NSDictionary *logParams;

+ (id)requiredKeyPaths;
+ (id)trackJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)instancesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
