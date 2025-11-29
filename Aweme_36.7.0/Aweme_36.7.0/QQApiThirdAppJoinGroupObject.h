@class NSString;

@interface QQApiThirdAppJoinGroupObject : QQApiObject

@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *payToken;
@property (copy, nonatomic) NSString *pfkey;
@property (copy, nonatomic) NSString *unionID;

+ (id)objectWithAccessToken:(id)a0 payToken:(id)a1 pfkey:(id)a2 unionID:(id)a3;

- (id)initWithAccessToken:(id)a0 payToken:(id)a1 pfkey:(id)a2 unionID:(id)a3;
- (void).cxx_destruct;

@end
