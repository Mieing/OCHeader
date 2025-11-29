@class NSNumber;

@interface BDXBridgeSearchMotionMonitorMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *anti_result_click_viewport_x;
@property (retain, nonatomic) NSNumber *anti_result_click_viewport_y;
@property (retain, nonatomic) NSNumber *anti_result_click_press_duration;
@property (retain, nonatomic) NSNumber *anti_result_click_time_diff;
@property (retain, nonatomic) NSNumber *anti_result_scroll_duration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
