@class NSString;

@interface CJPayDeskConfig : JSONModel

@property (copy, nonatomic) NSString *confirmBtnDesc;
@property (copy, nonatomic) NSString *themeString;
@property (copy, nonatomic) NSString *complianceBtnChangeTag;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) NSString *agreementUrl;
@property (nonatomic) BOOL agreementChoose;
@property (copy, nonatomic) NSString *agreementTitle;
@property (nonatomic) BOOL whetherShowLeftTime;
@property (nonatomic) long long leftTime;
@property (copy, nonatomic) NSString *withdrawArrivalTime;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) long long queryResultTime;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) NSString *jhResultPageStyle;
@property (copy, nonatomic) NSString *containerViewLynxUrl;
@property (nonatomic) long long renderTimeoutTime;
@property (copy, nonatomic) NSString *callBackTypeStr;
@property (nonatomic) long long callBackType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (long long)currentDeskType;
- (void).cxx_destruct;
- (id)theme;

@end
