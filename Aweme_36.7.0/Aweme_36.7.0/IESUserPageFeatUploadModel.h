@interface IESUserPageFeatUploadModel : NSObject <NSCoding>

@property (nonatomic) long long usr_is_current;
@property (nonatomic) long long usr_open_cnt;
@property (nonatomic) long long usr_is_star_account;
@property (nonatomic) long long usr_is_custom_verify;
@property (nonatomic) long long usr_is_enterprise_verify;
@property (nonatomic) long long usr_follow_status;
@property (nonatomic) long long usr_follow_status2;
@property (nonatomic) long long usr_like;
@property (nonatomic) long long usr_comment;
@property (nonatomic) long long usr_fav_cnt;
@property (nonatomic) long long usr_share_cnt;
@property (nonatomic) long long usr_mix_type;
@property (nonatomic) long long usr_aweme_type;
@property (nonatomic) long long usr_tag_lv1;
@property (nonatomic) long long usr_tag_lv2;
@property (nonatomic) long long usr_tag_lv3;
@property (nonatomic) long long usr_tagv2_level1;
@property (nonatomic) long long usr_tagv2_level2;
@property (nonatomic) long long usr_tagv2_level3;
@property (nonatomic) long long usr_tagv2_level1_prob;
@property (nonatomic) long long usr_tagv2_level2_prob;
@property (nonatomic) long long usr_tagv2_level3_prob;
@property (nonatomic) long long usr_stay_time;
@property (nonatomic) long long usr_play_total;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
