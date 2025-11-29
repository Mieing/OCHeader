@class NSString, NSNumber;

@interface BDXBridgeLifeCreationPublishPoiRatingInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *ratingId;
@property (retain, nonatomic) NSNumber *ratingGrade;
@property (retain, nonatomic) NSNumber *poiTabId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
