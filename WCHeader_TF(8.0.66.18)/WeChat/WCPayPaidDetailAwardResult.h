@class NSString;

@interface WCPayPaidDetailAwardResult : NSObject

@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *activityIconUrl;
@property (retain, nonatomic) NSString *activityMainTitle;
@property (retain, nonatomic) NSString *activitySubTitle;
@property (retain, nonatomic) NSString *activityBtnTitle;
@property (retain, nonatomic) NSString *activityUrl;
@property (retain, nonatomic) NSString *tinyAppName;
@property (retain, nonatomic) NSString *tinyAppLogo;
@property (retain, nonatomic) NSString *tinyAppDesc;
@property (retain, nonatomic) NSString *tinyAppUsername;
@property (retain, nonatomic) NSString *tinyAppPath;
@property (retain, nonatomic) NSString *tinyAppBtnText;

- (id)init;
- (void).cxx_destruct;

@end
