@class NSString, NSNumber;

@interface AWEFeedLiveSkipFeatureModel : AWEFeedBaseSequenceFeatureModel

@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSNumber *live_time_gap;
@property (copy, nonatomic) NSNumber *live_duration;
@property (copy, nonatomic) NSNumber *live_window_stay_duration;
@property (copy, nonatomic) NSNumber *live_show_time;

- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
