@class NSString, NSNumber;

@interface AnnieLiveBizInternalSchemeParam : NSObject

@property (copy, nonatomic) NSString *web_bg_color;
@property (copy, nonatomic) NSString *container_bg_color;
@property (copy, nonatomic) NSString *nav_bar_color;
@property (nonatomic) BOOL force_dark_style;
@property (nonatomic) BOOL support_exchange_theme;
@property (nonatomic) BOOL show_close;
@property (nonatomic) BOOL show_mask;
@property (retain, nonatomic) NSNumber *mask_alpha;
@property (copy, nonatomic) NSString *mask_bg_color;
@property (retain, nonatomic) NSNumber *mask_click_disable;
@property (retain, nonatomic) NSNumber *pull_down_close;
@property (copy, nonatomic) NSString *gravity;
@property (copy, nonatomic) NSString *launch_mode;
@property (copy, nonatomic) NSString *page_tag;
@property (nonatomic) BOOL forbid_right_back;
@property (nonatomic) BOOL enable_pad_adapter;
@property (nonatomic) double margin_bottom;
@property (nonatomic) double margin_right;
@property (nonatomic) BOOL fixed_height;
@property (retain, nonatomic) NSNumber *add_safe_area_height;
@property (nonatomic) BOOL landscape_custom_gravity;
@property (nonatomic) BOOL up_full_screen;
@property (nonatomic) double up_height_percent;
@property (nonatomic) double up_offset_height;
@property (nonatomic) BOOL up_trans_status_bar;
@property (retain, nonatomic) NSNumber *pull_down_height;
@property (copy, nonatomic) NSString *pull_down_indicator_color;
@property (retain, nonatomic) NSNumber *hide_loading;
@property (retain, nonatomic) NSNumber *disable_mask_animation;
@property (copy, nonatomic) NSString *up_status_bar_bg_color;
@property (nonatomic) long long close_icon_position;
@property (nonatomic) long long icon_theme;
@property (nonatomic) BOOL enable_content_full_screen;
@property (retain, nonatomic) NSNumber *disable_bounces;
@property (retain, nonatomic) NSNumber *disable_close_when_add_view;

- (void).cxx_destruct;

@end
