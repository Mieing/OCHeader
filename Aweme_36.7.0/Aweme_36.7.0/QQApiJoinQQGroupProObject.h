@class NSString;

@interface QQApiJoinQQGroupProObject : QQApiObject

@property (retain, nonatomic) NSString *ts;
@property (copy, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *app_name;
@property (retain, nonatomic) NSString *package_id;
@property (retain, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *openid;
@property (copy, nonatomic) NSString *guild_id;
@property (copy, nonatomic) NSString *zone_id;
@property (copy, nonatomic) NSString *guild_openid;
@property (copy, nonatomic) NSString *specify_uin;
@property (copy, nonatomic) NSString *force_account_equal;
@property (copy, nonatomic) NSString *from_open_sdk;
@property (copy, nonatomic) NSString *signKey;
@property (copy, nonatomic) NSString *openKey;

- (long long)checkParamValid;
- (id)signString;
- (void).cxx_destruct;
- (id)queryDictionary;

@end
