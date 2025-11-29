@class NSString;

@interface BizAffInitConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL isStandalone;
@property (nonatomic) BOOL isDebug;
@property (nonatomic) BOOL resetData;
@property (nonatomic) BOOL adOpen;
@property (nonatomic) BOOL isBizForceDisableNewMsgDirect;
@property (nonatomic) BOOL allowEmptyListResort;
@property (nonatomic) int abstractType;
@property (nonatomic) int subscribeCountLowerLimit;
@property (nonatomic) BOOL isNewUi;
@property (nonatomic) BOOL isOpenSubscribe;
@property (nonatomic) int requestFrequencyTime;
@property (nonatomic) BOOL isAllowNotifyKeep;
@property (nonatomic) int requestNotifyFrequencyTime;
@property (nonatomic) int requestMassMsgCount;
@property (nonatomic) int requestNotifyMsgFrequencyTime;
@property (nonatomic) int requestMainTabFrequencyTime;
@property (retain, nonatomic) NSString *strategyBuffer;
@property (nonatomic) int unreadNotifyExpireSpecifiedTime;
@property (nonatomic) int requestReliableNotifyFrequencyTime;

+ (void)initialize;

@end
