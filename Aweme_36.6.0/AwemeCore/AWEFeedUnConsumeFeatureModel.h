@class NSString, NSNumber;

@interface AWEFeedUnConsumeFeatureModel : AWEFeedBaseSequenceFeatureModel

@property (copy, nonatomic) NSString *item_id;
@property (copy, nonatomic) NSNumber *video_time;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *music_id;
@property (copy, nonatomic) NSString *author_id;
@property (copy, nonatomic) NSString *biz;
@property (copy, nonatomic) NSNumber *predict_stay_time;
@property (copy, nonatomic) NSNumber *predict_skip;
@property (copy, nonatomic) NSNumber *predict_playcomplete;
@property (copy, nonatomic) NSNumber *predict_finish;
@property (copy, nonatomic) NSNumber *predict_pure_like;
@property (copy, nonatomic) NSNumber *predict_dislike;
@property (copy, nonatomic) NSNumber *predict_head;
@property (copy, nonatomic) NSNumber *predict_head_play_cnt;
@property (copy, nonatomic) NSNumber *predict_head_playtime;
@property (nonatomic) long long is_commerce_unconsumed;

+ (id)predictFeatureKeyMap;

- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
