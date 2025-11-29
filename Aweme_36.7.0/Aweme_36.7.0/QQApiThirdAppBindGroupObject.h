@class NSString;

@interface QQApiThirdAppBindGroupObject : QQApiObject

@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *payToken;
@property (copy, nonatomic) NSString *pfkey;
@property (copy, nonatomic) NSString *unionID;
@property (copy, nonatomic) NSString *appDisplayName;

+ (id)objectWithAccessToken:(id)a0 payToken:(id)a1 pfkey:(id)a2 unionID:(id)a3 appDisplayName:(id)a4;

- (id)initWithAccessToken:(id)a0 payToken:(id)a1 pfkey:(id)a2 unionID:(id)a3 appDisplayName:(id)a4;
- (void).cxx_destruct;

@end
