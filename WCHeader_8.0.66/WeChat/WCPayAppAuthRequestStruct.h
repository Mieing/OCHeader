@class NSString;

@interface WCPayAppAuthRequestStruct : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *partnerId;
@property (retain, nonatomic) NSString *prepayId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timeStamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *bundleId;

- (void).cxx_destruct;

@end
