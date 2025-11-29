@class NSString, HTSLiveGiftPreviewInfo, HTSLiveImage, HTSLiveGiftImage, HTSLiveGiftMsgBoard, NSMutableArray, GPBStringInt64Dictionary, GPBInt64Array;

@interface HTSLiveGiftLiteStruct : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) int type;
@property (retain, nonatomic) HTSLiveGiftImage *image;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) HTSLiveGiftImage *webpImage;
@property (nonatomic) BOOL hasWebpImage;
@property (retain, nonatomic) HTSLiveGiftImage *giftLabelIcon;
@property (nonatomic) BOOL hasGiftLabelIcon;
@property (nonatomic) long long primaryEffectId;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *describe;
@property (retain, nonatomic) HTSLiveGiftMsgBoard *msgBoard;
@property (nonatomic) BOOL hasMsgBoard;
@property (retain, nonatomic) HTSLiveGiftPreviewInfo *giftPreviewInfo;
@property (nonatomic) BOOL hasGiftPreviewInfo;
@property (nonatomic) BOOL forPortal;
@property (retain, nonatomic) GPBInt64Array *assetIdsArray;
@property (readonly, nonatomic) unsigned long long assetIdsArray_Count;
@property (retain, nonatomic) GPBInt64Array *optionalAssetIdsArray;
@property (readonly, nonatomic) unsigned long long optionalAssetIdsArray_Count;
@property (nonatomic) BOOL forFansclub;
@property (nonatomic) long long selectedDynamicEffect;
@property (nonatomic) int afterSendAction;
@property (retain, nonatomic) NSMutableArray *groupInfoArray;
@property (readonly, nonatomic) unsigned long long groupInfoArray_Count;
@property (nonatomic) BOOL disableWishList;
@property (nonatomic) long long giftOfflineTime;
@property (nonatomic) long long reqExtraType;
@property (copy, nonatomic) NSString *bannerSchemeURL;
@property (retain, nonatomic) GPBStringInt64Dictionary *specialEffects;
@property (readonly, nonatomic) unsigned long long specialEffects_Count;
@property (nonatomic) BOOL isDisplayedOnPanel;
@property (retain, nonatomic) NSMutableArray *triggerWordsArray;
@property (readonly, nonatomic) unsigned long long triggerWordsArray_Count;
@property (copy, nonatomic) NSString *eventName;
@property (nonatomic) int giftSource;
@property (nonatomic) BOOL combo;
@property (nonatomic) BOOL forFirstRecharge;
@property (retain, nonatomic) HTSLiveImage *dynamicImgForSelected;
@property (nonatomic) BOOL hasDynamicImgForSelected;
@property (nonatomic) int diamondCount;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int bizType;
@property (copy, nonatomic) NSString *sortExtra;

+ (id)descriptor;

@end
