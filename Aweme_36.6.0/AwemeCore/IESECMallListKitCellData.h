@class IESECListKitCellFeedbackData, IESECListKitDemoLiveHeaderData, NSDictionary, IESECListKitDemoStore, IESECListKitSliceLiveCardData, IESECListKitDemoLiveData, IESECListKitDemoVideoData, IESECListKitABValue, NSString, IESECListKitCommonABValue, IESECListKitDemoUser, IESECListKitItemStyle, NSArray, IESECMallListKitBigFontConfig, IESECListKitElementInfo, IESECListKitDemoProduct;

@interface IESECMallListKitCellData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cardType;
@property (retain, nonatomic) IESECListKitDemoProduct *productInfo;
@property (retain, nonatomic) IESECListKitDemoUser *userInfo;
@property (retain, nonatomic) IESECListKitDemoLiveData *liveModel;
@property (copy, nonatomic) NSString *playIcon;
@property (retain, nonatomic) IESECListKitDemoVideoData *videoModel;
@property (retain, nonatomic) IESECListKitDemoLiveHeaderData *liveHeaderModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *cardCommon;
@property (copy, nonatomic) NSDictionary *marketingData;
@property (retain, nonatomic) IESECListKitABValue *abValue;
@property (nonatomic) BOOL showJustNow;
@property (nonatomic) BOOL isMute;
@property (nonatomic) double itemWidth;
@property (retain, nonatomic) IESECListKitItemStyle *itemStyle;
@property (nonatomic) double nativeHeight;
@property (nonatomic) double coverImageViewHeight;
@property (retain, nonatomic) IESECListKitDemoStore *storeModel;
@property (nonatomic) BOOL showAD;
@property (nonatomic) BOOL isAD;
@property (retain, nonatomic) IESECListKitCellFeedbackData *feedbackModel;
@property (nonatomic) BOOL showMarketing;
@property (nonatomic) unsigned long long currentTarget;
@property (copy, nonatomic) NSString *marketingText;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly, copy, nonatomic) NSString *extraRecommendInfo;
@property (copy, nonatomic) NSString *bffEcomSceneId;
@property (retain, nonatomic) IESECListKitCommonABValue *commonABValue;
@property (copy, nonatomic) NSDictionary *rawABValueDict;
@property (nonatomic) BOOL hasReportAutoPlay;
@property (copy, nonatomic) NSString *isInstantRecCard;
@property (nonatomic) BOOL needAnimation;
@property (nonatomic) BOOL disableVane;
@property (retain, nonatomic) IESECListKitElementInfo *elementStyle;
@property (copy, nonatomic) NSString *btmCD;
@property (copy, nonatomic) NSString *descIcon;
@property (retain, nonatomic) NSArray *gradientViewDefaultColors;
@property (retain, nonatomic) IESECMallListKitBigFontConfig *bigFontConfig;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) BOOL isCurrentDarkMode;
@property (nonatomic) BOOL hideMuteButton;
@property (nonatomic) BOOL isCacheData;
@property (retain, nonatomic) IESECListKitSliceLiveCardData *sliceLiveCardData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
