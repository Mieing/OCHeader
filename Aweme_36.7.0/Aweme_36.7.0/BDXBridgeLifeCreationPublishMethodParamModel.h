@class BDXBridgeLifeCreationPublishBizData, NSString, BDXBridgeLifeCreationPublishPoiRatingInfo, BDXBridgeLifeCreationPublishMusic, NSArray, BDXBridgeLifeCreationPublishPoi, NSDictionary;

@interface BDXBridgeLifeCreationPublishMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *challengeID;
@property (retain, nonatomic) BDXBridgeLifeCreationPublishBizData *bizData;
@property (retain, nonatomic) BDXBridgeLifeCreationPublishPoi *poi;
@property (retain, nonatomic) BDXBridgeLifeCreationPublishPoiRatingInfo *poiRatingInfo;
@property (retain, nonatomic) BDXBridgeLifeCreationPublishMusic *music;
@property (retain, nonatomic) NSArray *instances;
@property (copy, nonatomic) NSDictionary *logParams;

+ (id)requiredKeyPaths;
+ (id)musicJSONTransformer;
+ (id)poiJSONTransformer;
+ (id)bizDataJSONTransformer;
+ (id)instancesJSONTransformer;
+ (id)poiRatingInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
