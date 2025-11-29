@class NSString;

@interface WCPayBrandPrepayRequestStruct : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *paySign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *stepInURL;
@property (retain, nonatomic) NSString *stepInAppUserName;
@property (nonatomic) unsigned int payChannel;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int payScene;
@property (nonatomic) unsigned int weappEnterScene;
@property (retain, nonatomic) NSString *weappPayCookies;

- (void).cxx_destruct;

@end
