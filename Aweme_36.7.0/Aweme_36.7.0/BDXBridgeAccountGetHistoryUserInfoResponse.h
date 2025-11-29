@class NSString, NSNumber;

@interface BDXBridgeAccountGetHistoryUserInfoResponse : BDXBridgeModel

@property (copy, nonatomic) NSString *user_id;
@property (copy, nonatomic) NSString *avatar_url;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSNumber *enterprise_user_type;
@property (copy, nonatomic) NSString *business_identity_name;
@property (copy, nonatomic) NSString *sec_user_id;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
