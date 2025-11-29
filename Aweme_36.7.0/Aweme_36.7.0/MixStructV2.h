@class MixChargeStructV2, NSString, UserStructV2, UrlStructV2, GPBInt64Array, MixStatusStructV2, SeriesNewMixStructV2, MixStatisStructV2, ShareStructV2, ChargeStrategyStructV2;

@interface MixStructV2 : GPBMessage

@property (copy, nonatomic) NSString *mixId;
@property (nonatomic) BOOL hasMixId;
@property (copy, nonatomic) NSString *mixName;
@property (nonatomic) BOOL hasMixName;
@property (retain, nonatomic) UrlStructV2 *coverURL;
@property (nonatomic) BOOL hasCoverURL;
@property (retain, nonatomic) UrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;
@property (retain, nonatomic) MixStatusStructV2 *status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) MixStatisStructV2 *statis;
@property (nonatomic) BOOL hasStatis;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (retain, nonatomic) UserStructV2 *author;
@property (nonatomic) BOOL hasAuthor;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) ShareStructV2 *shareInfo;
@property (nonatomic) BOOL hasShareInfo;
@property (nonatomic) int isSerialMix;
@property (nonatomic) BOOL hasIsSerialMix;
@property (nonatomic) int mixPicType;
@property (nonatomic) BOOL hasMixPicType;
@property (nonatomic) int mixType;
@property (nonatomic) BOOL hasMixType;
@property (nonatomic) int enableAd;
@property (nonatomic) BOOL hasEnableAd;
@property (retain, nonatomic) ChargeStrategyStructV2 *chargeStrategy;
@property (nonatomic) BOOL hasChargeStrategy;
@property (retain, nonatomic) MixChargeStructV2 *chargeInfo;
@property (nonatomic) BOOL hasChargeInfo;
@property (nonatomic) int isIaa;
@property (nonatomic) BOOL hasIsIaa;
@property (nonatomic) int disableDisplay;
@property (nonatomic) BOOL hasDisableDisplay;
@property (retain, nonatomic) GPBInt64Array *paidEpisodesArray;
@property (readonly, nonatomic) unsigned long long paidEpisodesArray_Count;
@property (nonatomic) int innerType;
@property (nonatomic) BOOL hasInnerType;
@property (nonatomic) int disableDisplayInner;
@property (nonatomic) BOOL hasDisableDisplayInner;
@property (retain, nonatomic) UrlStructV2 *darkIconURL;
@property (nonatomic) BOOL hasDarkIconURL;
@property (retain, nonatomic) UrlStructV2 *lightIconURL;
@property (nonatomic) BOOL hasLightIconURL;
@property (retain, nonatomic) SeriesNewMixStructV2 *seriesNewMixInfo;
@property (nonatomic) BOOL hasSeriesNewMixInfo;

+ (id)descriptor;

@end
