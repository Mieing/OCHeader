@class IESECLiveNormalUIConfig;

@interface IESECLiveIntroducingCardUIConfigStore : IESECLiveComponentUIConfigStoreBase

@property (retain, nonatomic) IESECLiveNormalUIConfig *closeButtonUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *stateTagUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *stateTagExtraInfoLabelUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *statusMaskUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *titleUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *titleContentLineUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *titleNormalLineSpacingUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *titleTagLineSpacingUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *subtitleUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *bottomButtonPriceUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *bottomButtonPricePrefixUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *bottomButtonPriceDollarTagUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *bottomButtonPriceIntegerUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *bottomButtonPriceDecimalUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *bottomButtonPriceSuffixUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *bottomButtonBuyUIConfig;
@property (retain, nonatomic) IESECLiveNormalUIConfig *bottomButtonBuyIconUIConfig;

- (void)setupUIConfigs;
- (void)setupCloseButtonUIConfig;
- (void)setupStateTagUIConfig;
- (void)setupStateTagExtraInfoLabelUIConfig;
- (void)setupStatusMaskUIConfig;
- (void)setupTitleUIConfig;
- (void)setupTitleContentLineUIConfig;
- (void)setupTitleNormalLineSpacingUIConfig;
- (void)setupTitleTagLineSpacingUIConfig;
- (void)setupSubtitleUIConfig;
- (void)setupBottomButtonPriceUIConfig;
- (void)setupBottomButtonPricePrefixUIConfig;
- (void)setupBottomButtonPriceDollarTagUIConfig;
- (void)setupBottomButtonPriceIntegerUIConfig;
- (void)setupBottomButtonPriceDecimalUIConfig;
- (void)setupBottomButtonPriceSuffixUIConfig;
- (void)setupBottomButtonBuyUIConfig;
- (void)setupBottomButtonBuyIconUIConfig;
- (void).cxx_destruct;

@end
