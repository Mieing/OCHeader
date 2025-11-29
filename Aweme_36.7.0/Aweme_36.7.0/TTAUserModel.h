@class TTABUIUserAuditInfoModel, NSString, TTAAppUserModel, NSArray, TTAMediaUserModel, NSNumber, NSDictionary;
@protocol TTAThirdAccountModel;

@interface TTAUserModel : TTADataRespModel

@property (retain, nonatomic) NSNumber *is_toutiao;
@property (copy, nonatomic) NSString *session_key;
@property (retain, nonatomic) NSNumber *user_id;
@property (copy, nonatomic) NSString *user_id_str;
@property (retain, nonatomic) NSNumber *odin_user_type;
@property (copy, nonatomic) NSString *sec_user_id;
@property (nonatomic) long long hm_region;
@property (nonatomic) BOOL use_hm_region;
@property (copy, nonatomic) NSString *sec_info;
@property (retain, nonatomic) NSNumber *media_id;
@property (retain, nonatomic) TTAMediaUserModel *media;
@property (retain, nonatomic) TTAAppUserModel *app_user_info;
@property (nonatomic) BOOL user_verified;
@property (copy, nonatomic) NSString *user_auth_info;
@property (copy, nonatomic) NSString *auth_verified_info;
@property (nonatomic) BOOL new_user;
@property (nonatomic) BOOL skip_edit_profile;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *age_gate_birthday;
@property (retain, nonatomic) NSNumber *gender;
@property (copy, nonatomic) NSString *area;
@property (copy, nonatomic) NSString *industry;
@property (copy, nonatomic) NSString *screen_name;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *country_code;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *avatar_url;
@property (copy, nonatomic) NSString *user_decoration;
@property (copy, nonatomic) NSString *avatar_large_url;
@property (copy, nonatomic) NSString *bg_img_url;
@property (copy, nonatomic) NSString *user_description;
@property (nonatomic) BOOL can_be_found_by_phone;
@property (nonatomic) long long user_privacy_extend;
@property (nonatomic) long long share_to_repost;
@property (copy, nonatomic) NSString *verified_reason;
@property (copy, nonatomic) NSString *verified_content;
@property (copy, nonatomic) NSString *verified_agency;
@property (copy, nonatomic) NSString *recommend_reason;
@property (copy, nonatomic) NSString *reason_type;
@property (retain, nonatomic) NSNumber *point;
@property (copy, nonatomic) NSString *share_url;
@property (retain, nonatomic) NSNumber *safe;
@property (nonatomic) BOOL is_blocking;
@property (nonatomic) BOOL is_blocked;
@property (nonatomic) BOOL is_following;
@property (nonatomic) BOOL is_followed;
@property (nonatomic) BOOL is_recommend_allowed;
@property (copy, nonatomic) NSString *recommend_hint_message;
@property (retain, nonatomic) NSNumber *followers_count;
@property (retain, nonatomic) NSNumber *followings_count;
@property (retain, nonatomic) NSNumber *visit_count_recent;
@property (retain, nonatomic) NSNumber *moments_count;
@property (nonatomic) BOOL can_bind_visitor_account;
@property (nonatomic) BOOL is_manual_set_user_info;
@property (copy, nonatomic) NSArray<TTAThirdAccountModel> *connects;
@property (nonatomic) BOOL has_password;
@property (nonatomic) BOOL is_visitor_account;
@property (copy, nonatomic) NSString *device_id;
@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *error_description;
@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSDictionary *expend_attrs;
@property (copy, nonatomic) NSString *lite_user_info_string;
@property (nonatomic) int lite_user_info_demotion;
@property (retain, nonatomic) TTABUIUserAuditInfoModel *bui_audit_info;
@property (nonatomic) int passport_enterprise_user_type;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)init;

@end
