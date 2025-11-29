@class NSString, HTSLiveImage, HTSLiveDiyGiftCardButton, HTSLiveCardLockInfo, HTSLiveComboHintInfo, NSMutableArray, GPBInt32Int64Dictionary, GPBInt32ObjectDictionary;

@interface HTSLiveDIYGiftCardInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *mainText;
@property (copy, nonatomic) NSString *subText;
@property (retain, nonatomic) HTSLiveImage *iconImg;
@property (nonatomic) BOOL hasIconImg;
@property (retain, nonatomic) HTSLiveImage *giftDescribeImg;
@property (nonatomic) BOOL hasGiftDescribeImg;
@property (retain, nonatomic) NSMutableArray *pluginsArray;
@property (readonly, nonatomic) unsigned long long pluginsArray_Count;
@property (nonatomic) long long totalDiamonds;
@property (retain, nonatomic) HTSLiveImage *giftCellIcon;
@property (nonatomic) BOOL hasGiftCellIcon;
@property (copy, nonatomic) NSString *mainTextAfterSend;
@property (copy, nonatomic) NSString *cardName;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long configId;
@property (retain, nonatomic) HTSLiveCardLockInfo *lockInfo;
@property (nonatomic) BOOL hasLockInfo;
@property (retain, nonatomic) HTSLiveImage *statusIconImg;
@property (nonatomic) BOOL hasStatusIconImg;
@property (copy, nonatomic) NSString *configIdStr;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) BOOL showRemindPoint;
@property (nonatomic) long long updateTime;
@property (nonatomic) int cardType;
@property (nonatomic) long long defaultChoseAction;
@property (nonatomic) BOOL notCache;
@property (retain, nonatomic) GPBInt32Int64Dictionary *tabChoseAction;
@property (readonly, nonatomic) unsigned long long tabChoseAction_Count;
@property (retain, nonatomic) HTSLiveComboHintInfo *comboHintInfo;
@property (nonatomic) BOOL hasComboHintInfo;
@property (nonatomic) int giftSelectedStyle;
@property (retain, nonatomic) HTSLiveImage *labelIcon;
@property (nonatomic) BOOL hasLabelIcon;
@property (retain, nonatomic) HTSLiveImage *backgroundImg;
@property (nonatomic) BOOL hasBackgroundImg;
@property (retain, nonatomic) NSMutableArray *subTextElementsArray;
@property (readonly, nonatomic) unsigned long long subTextElementsArray_Count;
@property (retain, nonatomic) HTSLiveDiyGiftCardButton *diyGiftCardButton;
@property (nonatomic) BOOL hasDiyGiftCardButton;
@property (nonatomic) BOOL defaultExpand;
@property (copy, nonatomic) NSString *sendButtonText;
@property (retain, nonatomic) HTSLiveImage *giftIconAssetImg;
@property (nonatomic) BOOL hasGiftIconAssetImg;
@property (retain, nonatomic) GPBInt32ObjectDictionary *defaultGiftText;
@property (readonly, nonatomic) unsigned long long defaultGiftText_Count;

+ (id)descriptor;

@end
