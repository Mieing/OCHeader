@class NSString, HTSLiveDIYGiftToolbarInfo, HTSLiveBottomLabel, HTSLiveIconAutoplayAssetInfo, HTSLiveSubscribeGiftPackInfo, HTSLiveGiftMarketingInfo, HTSLiveSeriesGiftsInfo, HTSLiveComboHintInfo, NSMutableArray;

@interface HTSLiveGiftExtra : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (retain, nonatomic) HTSLiveSubscribeGiftPackInfo *subscribeGiftPackInfo;
@property (nonatomic) BOOL hasSubscribeGiftPackInfo;
@property (copy, nonatomic) NSString *bannerGiftInfo;
@property (retain, nonatomic) NSMutableArray *giftBuffInfosArray;
@property (readonly, nonatomic) unsigned long long giftBuffInfosArray_Count;
@property (copy, nonatomic) NSString *giftPanelTopDescSchemeURL;
@property (retain, nonatomic) HTSLiveDIYGiftToolbarInfo *diyGiftToolbarInfo;
@property (nonatomic) BOOL hasDiyGiftToolbarInfo;
@property (retain, nonatomic) HTSLiveComboHintInfo *comboHintInfo;
@property (nonatomic) BOOL hasComboHintInfo;
@property (retain, nonatomic) HTSLiveSeriesGiftsInfo *seriesGiftsInfo;
@property (nonatomic) BOOL hasSeriesGiftsInfo;
@property (retain, nonatomic) HTSLiveIconAutoplayAssetInfo *iconAutoplayAssetInfo;
@property (nonatomic) BOOL hasIconAutoplayAssetInfo;
@property (retain, nonatomic) HTSLiveGiftMarketingInfo *giftMarketingInfo;
@property (nonatomic) BOOL hasGiftMarketingInfo;
@property (copy, nonatomic) NSString *metaInfo;
@property (nonatomic) BOOL showComboTray;
@property (nonatomic) int giftSelectedStyle;
@property (nonatomic) int assetDisplayStrategy;
@property (retain, nonatomic) HTSLiveBottomLabel *bottomLabel;
@property (nonatomic) BOOL hasBottomLabel;

+ (id)descriptor;

@end
