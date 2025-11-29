@interface MicSetting_PurchaseMicSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int micDurationMinute;
@property (nonatomic) unsigned int micBreakType;
@property (nonatomic) unsigned int micPrice;
@property (nonatomic) BOOL allowAudienceAddPrice;
@property (nonatomic) unsigned int audienceMinIncrementPrice;
@property (nonatomic) unsigned int incrementAmountSingle;
@property (nonatomic) BOOL highlightMicPerson;
@property (nonatomic) unsigned long long purchaseMicSettingSeq;

+ (void)initialize;

@end
