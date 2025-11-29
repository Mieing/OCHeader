@class NSString;

@interface AWEFeedNearbyFeatureModel : AWEFeedSequenceFeatureModel

@property (nonatomic) unsigned long long poi_act;
@property (copy, nonatomic) NSString *distance_raw;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *poi_id;
@property (copy, nonatomic) NSString *poi_type_code;

- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
