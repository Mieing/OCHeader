@class NSString, NSNumber;

@interface BDASifXBridgeUserInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *avatar_url;
@property (copy, nonatomic) NSString *bind_phone;
@property (retain, nonatomic) NSNumber *is_login;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *sec_user_id;
@property (copy, nonatomic) NSString *unique_id;
@property (copy, nonatomic) NSString *user_id;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
