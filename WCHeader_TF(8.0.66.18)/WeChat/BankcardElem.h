@class NSString, NSMutableArray;

@interface BankcardElem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankLogo;
@property (nonatomic) unsigned int bankCardFee;
@property (nonatomic) unsigned int bankFlag;
@property (retain, nonatomic) NSMutableArray *enterTimeList;
@property (retain, nonatomic) NSString *maintenanceText;
@property (retain, nonatomic) NSString *maintenanceColor;
@property (retain, nonatomic) NSString *maintenanceAlertText;
@property (retain, nonatomic) NSString *sortPingyin;
@property (retain, nonatomic) NSString *feeRateExplain;
@property (nonatomic) unsigned long long minPoundage;

+ (void)initialize;

@end
