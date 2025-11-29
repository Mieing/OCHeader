@class NSString;

@interface PayIBGActivityInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *btnText;
@property (retain, nonatomic) NSString *linkUrl;
@property (retain, nonatomic) NSString *linkText;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long activityType;
@property (retain, nonatomic) NSString *smallTitle;
@property (nonatomic) unsigned long long awardId;
@property (nonatomic) unsigned int sendRecordId;
@property (nonatomic) unsigned int userRecordId;
@property (retain, nonatomic) NSString *activityTinyappUsername;
@property (retain, nonatomic) NSString *activityTinyappPath;
@property (nonatomic) unsigned long long activityMchId;
@property (nonatomic) int activityTinyappVersion;

+ (void)initialize;

@end
