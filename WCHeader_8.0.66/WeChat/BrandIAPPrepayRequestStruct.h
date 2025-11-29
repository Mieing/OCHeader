@class NSString;

@interface BrandIAPPrepayRequestStruct : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *paySign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *stepInURL;
@property (retain, nonatomic) NSString *extKey;

- (void).cxx_destruct;

@end
