@class NSString, CJPayNoticeInfo, CJPayComponentShowPositionModel;

@interface CJPayBDDeskConfig : JSONModel

@property (copy, nonatomic) NSString *homePageStyle;
@property (copy, nonatomic) NSString *homePageUpdateVersion;
@property (copy, nonatomic) NSString *confirmBtnDesc;
@property (copy, nonatomic) NSString *themeString;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) NSString *homePageBackground;
@property (copy, nonatomic) NSString *homePageTitle;
@property (copy, nonatomic) NSString *homePageNotice;
@property (copy, nonatomic) NSString *agreementUrl;
@property (nonatomic) BOOL agreementChoose;
@property (copy, nonatomic) NSString *agreementTitle;
@property (nonatomic) BOOL whetherShowLeftTime;
@property (nonatomic) long long leftTime;
@property (retain, nonatomic) CJPayNoticeInfo *noticeInfo;
@property (copy, nonatomic) NSString *withdrawArrivalTime;
@property (nonatomic) int homePageAction;
@property (copy, nonatomic) NSString *skipConfirmShowVerifyPage;
@property (copy, nonatomic) NSString *pwdPageTitle;
@property (nonatomic) BOOL isShowUserAvatar;
@property (nonatomic) BOOL shouldShowTradeName;
@property (copy, nonatomic) NSString *homePageBgStyle;
@property (copy, nonatomic) NSString *homePageBgShowLogo;
@property (retain, nonatomic) CJPayComponentShowPositionModel *componentShowPositionMap;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isFastEnterBindCard;
- (void).cxx_destruct;
- (id)theme;

@end
