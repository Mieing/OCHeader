@class NSNumber, NSString, NSDictionary;

@interface BDXPopupInternalModel : NSObject

@property (retain, nonatomic) NSNumber *disable_outside_click_close;
@property (retain, nonatomic) NSNumber *enable_pull_down_close;
@property (copy, nonatomic) NSString *mask_bg_color;
@property (copy, nonatomic) NSString *argb_mask_color;
@property (copy, nonatomic) NSString *mask_color;
@property (retain, nonatomic) NSNumber *enable_trigger_showhide;
@property (retain, nonatomic) NSNumber *hide_nav_bar;
@property (retain, nonatomic) NSNumber *drag_follow_gesture;
@property (retain, nonatomic) NSNumber *resize_duration;
@property (copy, nonatomic) NSString *status_bar_color;
@property (copy, nonatomic) NSDictionary *type;
@property (retain, nonatomic) NSNumber *fixed_height;
@property (retain, nonatomic) NSNumber *horizontal_width_percent;
@property (retain, nonatomic) NSNumber *horizontal_height_percent;
@property (retain, nonatomic) NSNumber *horizontal_radius;
@property (retain, nonatomic) NSNumber *up_offset_height;
@property (copy, nonatomic) NSString *pull_down_indicator_color;
@property (copy, nonatomic) NSString *up_status_bar_bg_color;

- (void).cxx_destruct;

@end
