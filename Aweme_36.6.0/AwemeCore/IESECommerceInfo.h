@class NSString;

@interface IESECommerceInfo : NSObject <NSCoding>

@property (nonatomic) long long ec_is_fans;
@property (nonatomic) long long ec_is_livevip;
@property (nonatomic) long long ec_follow_status;
@property (nonatomic) long long ec_order;
@property (nonatomic) long long ec_play_time;
@property (nonatomic) long long ec_gap_time;
@property (nonatomic) long long ec_audience;
@property (nonatomic) long long ec_fps;
@property (nonatomic) long long ec_cpu_rate;
@property (nonatomic) long long ec_ui_rate;
@property (nonatomic) long long ec_cert_last;
@property (nonatomic) long long ec_cert_click;
@property (nonatomic) long long ec_cert_show;
@property (nonatomic) long long ec_list_show;
@property (nonatomic) long long ec_popup_click;
@property (nonatomic) long long ec_popup_show;
@property (nonatomic) long long ec_product_show;
@property (nonatomic) long long ec_product_click;
@property (nonatomic) long long ec_like;
@property (nonatomic) long long ec_dislike;
@property (nonatomic) long long ec_user;
@property (nonatomic) long long ec_follow;
@property (nonatomic) long long ec_unfollow;
@property (nonatomic) long long ec_gift;
@property (nonatomic) long long ec_prop;
@property (nonatomic) long long ec_recharge;
@property (nonatomic) long long ec_contribution;
@property (nonatomic) long long ec_jion;
@property (nonatomic) long long ec_mesage;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *anchorId;
@property (nonatomic) long long displayBeginTimeMs;
@property (nonatomic) long long displayTimes;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
