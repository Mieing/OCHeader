@class NSNumber, NSString;

@interface BDXPageInternalModel : NSObject

@property (retain, nonatomic) NSNumber *disable_swipe;
@property (retain, nonatomic) NSNumber *disable_pop_gesture;
@property (retain, nonatomic) NSNumber *showNavigationBar;
@property (retain, nonatomic) NSNumber *hide_nav_bar;
@property (retain, nonatomic) NSNumber *hide_more;
@property (retain, nonatomic) NSNumber *show_more_button;
@property (retain, nonatomic) NSNumber *should_full_screen;
@property (copy, nonatomic) NSString *status_bar_bg_color;
@property (copy, nonatomic) NSString *status_bar_color;
@property (copy, nonatomic) NSString *title_color;
@property (copy, nonatomic) NSString *nav_bar_color;
@property (nonatomic) BOOL hide_status_bar;
@property (retain, nonatomic) NSNumber *trans_status_bar;
@property BOOL forbid_fullscreen_back;

- (void).cxx_destruct;

@end
