@class NSString;

@interface QQApiCreateQQGroupProObject : QQApiObject

@property (retain, nonatomic) NSString *ts;
@property (copy, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *app_name;
@property (retain, nonatomic) NSString *package_id;
@property (retain, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *openid;
@property (copy, nonatomic) NSString *guild_id;
@property (copy, nonatomic) NSString *zone_id;
@property (copy, nonatomic) NSString *guild_name;
@property (copy, nonatomic) NSString *guild_avatar;
@property (copy, nonatomic) NSString *platid;
@property (copy, nonatomic) NSString *roleid;
@property (copy, nonatomic) NSString *areaid;
@property (copy, nonatomic) NSString *user_zone_id;
@property (copy, nonatomic) NSString *user_label;
@property (copy, nonatomic) NSString *nick_name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *specify_uin;
@property (copy, nonatomic) NSString *force_account_equal;
@property (copy, nonatomic) NSString *from_open_sdk;
@property (copy, nonatomic) NSString *signKey;
@property (copy, nonatomic) NSString *openKey;

- (long long)checkParamValid;
- (id)signString;
- (void).cxx_destruct;
- (id)init;
- (id)queryDictionary;

@end
