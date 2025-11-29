@class NSString, NSArray, HTSLiveImage, UIImage, HTSLiveCardLockInfo, NSDictionary, HTSLiveComboHintInfo, GPBInt32ObjectDictionary, NSNumber;

@interface IESLiveGiftAssemblyCustomizedCardConfig : NSObject <NSCoding>

@property (nonatomic) BOOL isNewCard;
@property (copy, nonatomic) NSString *cardName;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isPersonalTailer;
@property (nonatomic) BOOL isSelecting;
@property (retain, nonatomic) HTSLiveImage *cardCustomizedImage;
@property (retain, nonatomic) UIImage *convertedImage;
@property (retain, nonatomic) HTSLiveImage *giftCellImage;
@property (retain, nonatomic) HTSLiveImage *comboImage;
@property (copy, nonatomic) NSString *topInfoString;
@property (copy, nonatomic) NSString *topInfoAfterSendString;
@property (copy, nonatomic) NSString *subInfoString;
@property (copy, nonatomic) NSArray *giftPluginList;
@property (nonatomic) long long pluginTotalPrice;
@property (copy, nonatomic) NSString *baseImageInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } giftCellIconFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardIconFrame;
@property (nonatomic) unsigned long long chosenType;
@property (nonatomic) long long lockStatus;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cellText;
@property (nonatomic) long long configId;
@property (retain, nonatomic) HTSLiveImage *statusIconImg;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) BOOL showRemindPoint;
@property (retain, nonatomic) NSNumber *updateTime;
@property (nonatomic) int cardType;
@property (copy, nonatomic) NSString *toUserId;
@property (retain, nonatomic) NSDictionary *tabChoseAction;
@property (nonatomic) unsigned long long fromPageType;
@property (retain, nonatomic) NSNumber *originGiftId;
@property (nonatomic) BOOL notCache;
@property (retain, nonatomic) HTSLiveCardLockInfo *lockInfo;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *sendButtonText;
@property (retain, nonatomic) HTSLiveComboHintInfo *comboHintInfo;
@property (nonatomic) int giftSelectedStyle;
@property (copy, nonatomic) NSString *giftShowName;
@property (retain, nonatomic) HTSLiveImage *giftIconAssetImg;
@property (retain, nonatomic) GPBInt32ObjectDictionary *defaultGiftText;
@property (nonatomic) unsigned long long defaultGiftText_Count;
@property (nonatomic) BOOL customButtonColor;

- (id)cardKey;
- (id)giftPluginIdOnlyString;
- (id)giftPluginListString;
- (id)giftPluginDictList;
- (id)dictForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reportCardInfo;
- (id)lynxCardModelDict;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
