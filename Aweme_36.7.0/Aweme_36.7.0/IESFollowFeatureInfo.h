@class NSString, NSMutableArray;

@interface IESFollowFeatureInfo : NSObject <NSCoding>

@property (nonatomic) long long timeKey;
@property (nonatomic) long long ft_sky_open;
@property (nonatomic) long long ft_sky_close;
@property (nonatomic) long long ft_sky_slide;
@property (nonatomic) long long ft_sky_click;
@property (retain, nonatomic) NSString *ft_notice_type;
@property (nonatomic) long long ft_notice_cnt;
@property (nonatomic) long long ft_open_gap;
@property (nonatomic) long long ft_open_index;
@property (nonatomic) long long ft_stay_time;
@property (nonatomic) long long ft_vv;
@property (nonatomic) long long ft_finish;
@property (nonatomic) long long ft_skip;
@property (nonatomic) long long ft_pause;
@property (nonatomic) long long ft_like;
@property (nonatomic) long long ft_comment;
@property (nonatomic) long long ft_favourite;
@property (nonatomic) long long ft_share;
@property (nonatomic) long long ft_music;
@property (nonatomic) long long ft_search;
@property (nonatomic) long long ft_fresh;
@property (nonatomic) long long ft_live_vv;
@property (nonatomic) long long ft_live_click;
@property (nonatomic) long long p_enter_from;
@property (nonatomic) long long cur_page;
@property (nonatomic) long long his_page;
@property (nonatomic) long long his_page_gap;
@property (nonatomic) long long cur_tab_pos;
@property (retain, nonatomic) NSMutableArray *playtimeArray;
@property (retain, nonatomic) NSMutableArray *livePlaytimeArray;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
