@class SeriesUniversalCoverLabelV2, EntButtonInfoV2, PaidSeriesVipEntranceConfigV2;

@interface SeriesUIConfigV2 : GPBMessage

@property (retain, nonatomic) EntButtonInfoV2 *detailPageBuyButton;
@property (nonatomic) BOOL hasDetailPageBuyButton;
@property (retain, nonatomic) EntButtonInfoV2 *selectPanelBuyButton;
@property (nonatomic) BOOL hasSelectPanelBuyButton;
@property (retain, nonatomic) SeriesUniversalCoverLabelV2 *universalCoverLabel;
@property (nonatomic) BOOL hasUniversalCoverLabel;
@property (retain, nonatomic) EntButtonInfoV2 *collectionButton;
@property (nonatomic) BOOL hasCollectionButton;
@property (retain, nonatomic) PaidSeriesVipEntranceConfigV2 *paidSeriesVipEntranceConfig;
@property (nonatomic) BOOL hasPaidSeriesVipEntranceConfig;

+ (id)descriptor;

@end
