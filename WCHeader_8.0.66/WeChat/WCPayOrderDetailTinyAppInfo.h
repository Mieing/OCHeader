@class NSString;

@interface WCPayOrderDetailTinyAppInfo : NSObject

@property (retain, nonatomic) NSString *tinyAppName;
@property (retain, nonatomic) NSString *tinyAppLogo;
@property (retain, nonatomic) NSString *tinyAppDesc;
@property (retain, nonatomic) NSString *tinyAppUserName;
@property (retain, nonatomic) NSString *tinyAppPath;
@property (nonatomic) unsigned int tinyAppVersion;
@property (retain, nonatomic) NSString *tinyAppBtnText;
@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long activityType;
@property (nonatomic) unsigned long long awardId;
@property (nonatomic) unsigned int sendRecordId;
@property (nonatomic) unsigned int userRecordId;
@property (nonatomic) unsigned long long activityMchId;

- (void).cxx_destruct;

@end
