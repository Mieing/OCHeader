@class NSMutableArray;

@interface IESAppExitFeatureInfo : NSObject

@property (retain, nonatomic) NSMutableArray *playTimeList;
@property (retain, nonatomic) NSMutableArray *hotPlayTimeList;
@property (nonatomic) long long app_vv_cnt;
@property (nonatomic) long long app_play_time;
@property (nonatomic) long long hot_play_time;
@property (nonatomic) long long app_finish_cnt;
@property (nonatomic) long long app_comment_cnt;
@property (nonatomic) long long app_head_cnt;
@property (nonatomic) long long app_like_cnt;
@property (nonatomic) long long app_follow_cnt;
@property (nonatomic) long long app_favourite_cnt;
@property (nonatomic) long long app_music_cnt;
@property (nonatomic) long long app_share_cnt;
@property (nonatomic) long long app_dislike_cnt;
@property (nonatomic) long long app_home_hot_cnt;
@property (nonatomic) long long app_home_follow_cnt;
@property (nonatomic) long long app_home_familiar_cnt;
@property (nonatomic) long long app_live_cnt;
@property (nonatomic) long long app_shoot_cnt;
@property (nonatomic) long long app_plus_cnt;
@property (nonatomic) long long app_search_cnt;
@property (nonatomic) long long app_friend_cnt;
@property (nonatomic) long long app_message_cnt;
@property (nonatomic) long long app_mine_cnt;
@property (nonatomic) long long app_shop_cnt;
@property (nonatomic) long long app_ad_clk_cnt;
@property (nonatomic) long long app_block_cnt;
@property (nonatomic) long long hot_vv_cnt;
@property (nonatomic) long long hot_finish_cnt;
@property (nonatomic) long long hot_skip_cnt;
@property (nonatomic) long long hot_comment_cnt;
@property (nonatomic) long long hot_head_cnt;
@property (nonatomic) long long hot_like_cnt;
@property (nonatomic) long long hot_follow_cnt;
@property (nonatomic) long long hot_favourite_cnt;
@property (nonatomic) long long hot_music_cnt;
@property (nonatomic) long long hot_share_cnt;
@property (nonatomic) long long hot_dislike_cnt;

- (void).cxx_destruct;
- (id)init;

@end
