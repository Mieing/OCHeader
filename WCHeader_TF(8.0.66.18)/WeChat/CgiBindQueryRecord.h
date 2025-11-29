@class NSString, PromptInfo;

@interface CgiBindQueryRecord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *isSaveYfq;
@property (retain, nonatomic) NSString *bankFlag;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankPhone;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *bankaccType;
@property (retain, nonatomic) NSString *bindDayQuota;
@property (retain, nonatomic) NSString *bindOnceQuota;
@property (retain, nonatomic) NSString *bindSerial;
@property (retain, nonatomic) NSString *bindTail;
@property (retain, nonatomic) NSString *creditTypeId;
@property (retain, nonatomic) NSString *dayQuota1;
@property (retain, nonatomic) NSString *dayQuota2;
@property (retain, nonatomic) NSString *dayQuota3;
@property (retain, nonatomic) NSString *expiredFlag;
@property (retain, nonatomic) NSString *mobile;
@property (retain, nonatomic) NSString *onceQuota1;
@property (retain, nonatomic) NSString *onceQuota2;
@property (retain, nonatomic) NSString *onceQuota3;
@property (retain, nonatomic) NSString *bankCardTag;
@property (retain, nonatomic) NSString *bindBankName;
@property (retain, nonatomic) NSString *forbidWord;
@property (retain, nonatomic) NSString *forbidId;
@property (retain, nonatomic) NSString *extraBindFlag;
@property (retain, nonatomic) NSString *bindIcharacter4;
@property (retain, nonatomic) NSString *repayUrl;
@property (nonatomic) int supportMicropay;
@property (retain, nonatomic) NSString *supportSave;
@property (retain, nonatomic) NSString *supportFetch;
@property (retain, nonatomic) NSString *fetchPreArriveTime;
@property (retain, nonatomic) NSString *drawAvailable;
@property (retain, nonatomic) NSString *drawType;
@property (retain, nonatomic) NSString *exportStart;
@property (retain, nonatomic) NSString *exportEnd;
@property (retain, nonatomic) NSString *bankaccTypeName;
@property (retain, nonatomic) NSString *drawStatus;
@property (retain, nonatomic) NSString *arriveType;
@property (retain, nonatomic) NSString *noMicroWord;
@property (retain, nonatomic) NSString *availSaveWording;
@property (retain, nonatomic) NSString *maintainStarttime;
@property (retain, nonatomic) NSString *maintainEndtime;
@property (retain, nonatomic) NSString *bankLogoUrl;
@property (retain, nonatomic) NSString *fetchPreArriveTimeWording;
@property (nonatomic) unsigned int fetchChargeRate;
@property (nonatomic) unsigned int fullFetchChargeFee;
@property (retain, nonatomic) NSString *fetchChargeInfo;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *cardDetailFlag;
@property (retain, nonatomic) NSString *forbidTitle;
@property (retain, nonatomic) NSString *forbidUrl;
@property (retain, nonatomic) NSString *wxUnionCardFlag;
@property (retain, nonatomic) NSString *resourceBankType;
@property (retain, nonatomic) NSString *wxUnionCardState;
@property (nonatomic) unsigned long long wxUnionCardBalance;
@property (retain, nonatomic) NSString *cardBottomWording;
@property (retain, nonatomic) NSString *bindType;
@property (nonatomic) int isHightlightPreArriveTimeWording;
@property (nonatomic) int supportLqtTurnIn;
@property (nonatomic) int supportLqtTurnOut;
@property (retain, nonatomic) PromptInfo *promptInfo;

+ (void)initialize;

@end
