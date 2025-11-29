@class NSString, NSNumber, NSDictionary;

@interface IESVideoConditionModel : NSObject

@property (retain, nonatomic) NSString *network_type;
@property (retain, nonatomic) NSString *user_choose_quality_mode;
@property (retain, nonatomic) NSString *ad_play;
@property (retain, nonatomic) NSString *landscape_play;
@property (retain, nonatomic) NSString *tag_play;
@property (retain, nonatomic) NSString *qprf;
@property (retain, nonatomic) NSString *device_score;
@property (retain, nonatomic) NSString *speed_wifi_label;
@property (retain, nonatomic) NSString *device_score_raw;
@property (retain, nonatomic) NSString *har_type;
@property (retain, nonatomic) NSString *aweme_type;
@property (retain, nonatomic) NSString *is_dash;
@property (retain, nonatomic) NSString *v_duration_ms;
@property (retain, nonatomic) NSString *peak_time_type;
@property (retain, nonatomic) NSNumber *video_width_nearest;
@property (retain, nonatomic) NSNumber *gear_vqm_result;
@property (retain, nonatomic) NSNumber *avg_quality_diff;
@property (retain, nonatomic) NSString *publish_by_current_user;
@property (retain, nonatomic) NSString *thermal_severe_degrade;
@property (retain, nonatomic) NSString *video_quality;
@property (retain, nonatomic) NSString *quality_density_7d;
@property (retain, nonatomic) NSString *play_let;
@property (retain, nonatomic) NSDictionary *dynamicLabelDic;

+ (id)generateConditionModel:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
