@interface OutBoxPullFeedsConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int batchWithBizmsgresort;
@property (nonatomic) unsigned int outBoxPullFeedsNeedUplineCard;
@property (nonatomic) unsigned int enterBoxFilter;
@property (nonatomic) unsigned int outBoxPullFeedsControlSwitch;

+ (void)initialize;

- (void)setOutBoxPullFeedsControlSwitch:(unsigned int)a0;
- (unsigned int)outBoxPullFeedsControlSwitch;
- (void)setEnterBoxFilter:(unsigned int)a0;
- (unsigned int)enterBoxFilter;
- (void)setOutBoxPullFeedsNeedUplineCard:(unsigned int)a0;
- (unsigned int)outBoxPullFeedsNeedUplineCard;
- (void)setBatchWithBizmsgresort:(unsigned int)a0;
- (unsigned int)batchWithBizmsgresort;

@end
