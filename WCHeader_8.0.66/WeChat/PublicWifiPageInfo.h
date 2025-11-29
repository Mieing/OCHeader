@class NSString;

@interface PublicWifiPageInfo : MMObject

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *headImgUrl;
@property (copy, nonatomic) NSString *welcomeMsg;
@property (copy, nonatomic) NSString *privacyDescriUrl;
@property (copy, nonatomic) NSString *authurlSign;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) unsigned int hasMobile;
@property (nonatomic) unsigned int finishActionCode;
@property (copy, nonatomic) NSString *finishUrl;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *signature;
@property (nonatomic) unsigned int isDefaultFocus;
@property (copy, nonatomic) NSString *qingHuaiPageUrl;

- (void)dealloc;
- (void).cxx_destruct;

@end
