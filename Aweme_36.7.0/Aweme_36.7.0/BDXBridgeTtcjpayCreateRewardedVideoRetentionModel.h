@class NSString, NSArray, NSDictionary;

@interface BDXBridgeTtcjpayCreateRewardedVideoRetentionModel : BDXBridgeModel

@property (copy, nonatomic) NSString *unfinished_template;
@property (copy, nonatomic) NSString *modal_icon_url;
@property (copy, nonatomic) NSString *close_icon_url;
@property (copy, nonatomic) NSString *modal_auxiliary_button;
@property (copy, nonatomic) NSString *modal_confirm_button_bubble;
@property (copy, nonatomic) NSString *is_reward_inexact;
@property (copy, nonatomic) NSString *modal_tip_template;
@property (copy, nonatomic) NSString *display_icon;
@property (copy, nonatomic) NSString *modal_confirm_button;
@property (copy, nonatomic) NSString *modal_cancel_button;
@property (copy, nonatomic) NSString *modal_extra_config;
@property (copy, nonatomic) NSString *modal_title_template;
@property (copy, nonatomic) NSString *finished_template;
@property (copy, nonatomic) NSString *has_next_reward;
@property (retain, nonatomic) NSArray *reward;
@property (copy, nonatomic) NSDictionary *extra_params;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
