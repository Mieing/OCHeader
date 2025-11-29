@class BaseRequest, NSString, ActionLocation;

@interface PayAuthAppRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *partnerId;
@property (retain, nonatomic) NSString *prepayId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timeStamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *scence;
@property (retain, nonatomic) ActionLocation *actionLocation;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appSign;

+ (void)initialize;

@end
