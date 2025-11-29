@class NSString, NSArray, BDUGLuckySettingsPopupReward;

@interface BDUGLuckySettingsPopup : BDUGLuckyBDModel

@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) long long cycleId;
@property (nonatomic) long long popupId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *picUrl;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) double tsShowMs;
@property (nonatomic) double tsExpireMs;
@property (retain, nonatomic) BDUGLuckySettingsPopupReward *reward;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *closeColor;
@property (copy, nonatomic) NSString *callbackUrl;
@property (nonatomic) BOOL supportLandscape;
@property (copy, nonatomic) NSArray *buttonBgColor;
@property (copy, nonatomic) NSString *buttonBgUrl;
@property (nonatomic) BOOL showCloseBtn;
@property (copy, nonatomic) NSArray *posUrl;
@property (nonatomic) BOOL forbidLandscape;
@property (nonatomic) BOOL hideCloseBtn;
@property (nonatomic) long long popupType;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL isColdStart;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSArray *iosBlockList;
@property (copy, nonatomic) NSArray *androidBlockList;
@property (copy, nonatomic) NSArray *iosAllowList;
@property (copy, nonatomic) NSArray *androidAllowList;
@property (copy, nonatomic) NSString *popupKey;
@property (nonatomic) BOOL block;
@property (nonatomic) BOOL pollingSettingsUpdated;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
