@class NSNumber, NSString;

@interface IESLivePrefSampleStallInfo : NSObject

@property (retain, nonatomic) NSNumber *video_stall_count;
@property (retain, nonatomic) NSNumber *video_stall_duration;
@property (retain, nonatomic) NSNumber *ui_stall_count;
@property (retain, nonatomic) NSNumber *ui_stall_duration;
@property (retain, nonatomic) NSNumber *video_ui_total_stall_rate;
@property (retain, nonatomic) NSNumber *ui_total_stall_rate;
@property (retain, nonatomic) NSNumber *video_total_stall_rate;
@property (retain, nonatomic) NSNumber *ui_slight_stall_rate;
@property (retain, nonatomic) NSNumber *ui_moderate_stall_rate;
@property (retain, nonatomic) NSNumber *ui_serious_stall_rate;
@property (retain, nonatomic) NSNumber *ui_stall_duration_sum;
@property (retain, nonatomic) NSNumber *ui_stall_count_sum;
@property (retain, nonatomic) NSNumber *total_drop_time;
@property (retain, nonatomic) NSNumber *total_drop_count;
@property (retain, nonatomic) NSNumber *ui_slight_hitch_rate;
@property (retain, nonatomic) NSNumber *ui_moderate_hitch_rate;
@property (retain, nonatomic) NSNumber *ui_serious_hitch_rate;
@property (retain, nonatomic) NSNumber *ui_hitch_rate;
@property (retain, nonatomic) NSNumber *ui_hitch_rate3;
@property (retain, nonatomic) NSNumber *ui_hitch_time;
@property (retain, nonatomic) NSNumber *has_stall;
@property (retain, nonatomic) NSNumber *ui_fps;
@property (copy, nonatomic) NSString *drop_frame_string;

- (id)toDictinary;
- (void).cxx_destruct;

@end
