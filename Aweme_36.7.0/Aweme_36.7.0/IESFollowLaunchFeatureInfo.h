@class NSString, NSMutableArray;

@interface IESFollowLaunchFeatureInfo : NSObject

@property (nonatomic) long long timeKey;
@property (nonatomic) long long app_ft_sky_open;
@property (nonatomic) long long app_ft_sky_close;
@property (nonatomic) long long app_ft_sky_slide;
@property (nonatomic) long long app_ft_sky_click;
@property (nonatomic) long long app_ft_open;
@property (nonatomic) long long app_ft_first_gap;
@property (retain, nonatomic) NSString *app_ft_notice_type;
@property (nonatomic) long long app_ft_notice_cnt;
@property (nonatomic) long long app_ft_stay_time;
@property (nonatomic) long long app_ft_vv;
@property (nonatomic) long long app_ft_finish;
@property (nonatomic) long long app_ft_skip;
@property (nonatomic) long long app_ft_pause;
@property (nonatomic) long long app_ft_like;
@property (nonatomic) long long app_ft_comment;
@property (nonatomic) long long app_ft_favourite;
@property (nonatomic) long long app_ft_share;
@property (nonatomic) long long app_ft_music;
@property (nonatomic) long long app_ft_search;
@property (nonatomic) long long app_ft_fresh;
@property (nonatomic) long long app_ft_live_vv;
@property (nonatomic) long long app_ft_live_click;
@property (retain, nonatomic) NSMutableArray *launchPlaytimeArray;
@property (retain, nonatomic) NSMutableArray *launchLivePlaytimeArray;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
