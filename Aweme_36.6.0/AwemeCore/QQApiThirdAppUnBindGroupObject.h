@class NSString;

@interface QQApiThirdAppUnBindGroupObject : QQApiObject

@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *payToken;
@property (copy, nonatomic) NSString *pfkey;
@property (copy, nonatomic) NSString *unionID;

+ (id)objectWithAccessToken:(id)a0 payToken:(id)a1 pfkey:(id)a2 unionID:(id)a3 openId:(id)a4 appId:(id)a5;

- (id)initWithAccessToken:(id)a0 payToken:(id)a1 pfkey:(id)a2 unionID:(id)a3 openId:(id)a4 appId:(id)a5;
- (void).cxx_destruct;

@end
