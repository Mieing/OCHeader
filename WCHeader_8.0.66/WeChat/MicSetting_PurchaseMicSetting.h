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

- (void)setPurchaseMicSettingSeq:(unsigned long long)a0;
- (unsigned long long)purchaseMicSettingSeq;
- (void)setHighlightMicPerson:(BOOL)a0;
- (BOOL)highlightMicPerson;
- (void)setIncrementAmountSingle:(unsigned int)a0;
- (unsigned int)incrementAmountSingle;
- (void)setAudienceMinIncrementPrice:(unsigned int)a0;
- (unsigned int)audienceMinIncrementPrice;
- (void)setAllowAudienceAddPrice:(BOOL)a0;
- (BOOL)allowAudienceAddPrice;
- (void)setMicPrice:(unsigned int)a0;
- (unsigned int)micPrice;
- (void)setMicBreakType:(unsigned int)a0;
- (unsigned int)micBreakType;
- (void)setMicDurationMinute:(unsigned int)a0;
- (unsigned int)micDurationMinute;

@end
