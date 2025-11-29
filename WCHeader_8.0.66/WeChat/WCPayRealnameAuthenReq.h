@class NSString, WCPaySelectDateItemData;

@interface WCPayRealnameAuthenReq : NSObject

@property (retain) NSString *true_name;
@property (retain) NSString *cre_type;
@property (retain) NSString *cre_name;
@property (retain) NSString *identify_card;
@property (retain) NSString *identify_card_origin;
@property (retain) NSString *user_country;
@property (retain) NSString *user_province;
@property (retain) NSString *user_city;
@property (retain) NSString *profession_name;
@property (retain) NSString *profession_type;
@property (retain) NSString *birth_date;
@property (retain) WCPaySelectDateItemData *birth_date_origin;
@property (retain) NSString *cre_expire_date;
@property (retain) WCPaySelectDateItemData *cre_expire_date_origin;
@property (retain) NSString *creid_renewal;
@property long long creid_renewal_origin;
@property (retain) NSString *nationality;
@property (retain) NSString *countryCode;
@property (retain) NSString *session_id;
@property (retain) NSString *detail_address;
@property (retain) NSString *cre_effect_date;
@property (retain) NSString *cre_expire_date_plain;
@property (retain) NSString *sex;
@property (retain) NSString *is_close_marketing;
@property (retain) NSString *address;
@property (retain) WCPaySelectDateItemData *cre_effect_date_origin;
@property (retain) NSString *phone_no;
@property (retain) NSString *phone_no_origin;
@property (retain) NSString *encrypt_cre_effect_date;
@property (retain) NSString *cre_begin_date;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
