@class NSString, NSMutableArray, EXTPKG_mmpayapplynfccardbo_CardRecordsInfo;

@interface EXTPKG_mmpayapplynfccardbo_CardTypeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *fpanPrefix;
@property (retain, nonatomic) NSString *dpanPrefix;
@property (retain, nonatomic) NSString *cardCityId;
@property (retain, nonatomic) NSString *cardTitle;
@property (retain, nonatomic) NSString *cardMainLogo;
@property (retain, nonatomic) NSMutableArray *cardTag;
@property (nonatomic) int cardAboutContentFlag;
@property (retain, nonatomic) NSMutableArray *cardAboutContent;
@property (retain, nonatomic) NSMutableArray *cardDepositAmount;
@property (retain, nonatomic) NSString *cardLegalInfo;
@property (retain, nonatomic) NSString *cardApplyAmountName;
@property (nonatomic) long long cardApplyAmount;
@property (retain, nonatomic) NSString *iosVersion;
@property (retain, nonatomic) NSString *watchOsVersion;
@property (retain, nonatomic) NSString *orderRecordsInfo;
@property (nonatomic) long long cardMaxBalance;
@property (retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardRecordsInfo *cardRecordInfo;
@property (retain, nonatomic) NSString *preDepositOrderDesc;

+ (void)initialize;

@end
