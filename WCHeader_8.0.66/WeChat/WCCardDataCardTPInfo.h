@class NSString, NSArray, DynamicQrCodeInfo, WCCardUseConditionInfo, BluetoothInfo, WCCardUsedStoreInfo, WCCardOperationRegion, WCCardDetailInfo, WCCardFieldItem, WCCardFollowBoxInfo, WCCardActionSheet;

@interface WCCardDataCardTPInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *cardTypeName;
@property (retain, nonatomic) NSString *cardCategory;
@property (retain, nonatomic) NSString *acceptWording;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *logoName;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSArray *primaryFields;
@property (retain, nonatomic) NSString *primarySubTitle;
@property (retain, nonatomic) NSString *middleIconUrl;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *servicePhone;
@property (retain, nonatomic) NSArray *introduceFields;
@property (nonatomic) unsigned int shopCount;
@property (retain, nonatomic) NSString *imageTextUrl;
@property (retain, nonatomic) NSString *sourceIconUrl;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *h5ShowUrl;
@property (nonatomic) unsigned int blockMask;
@property (retain, nonatomic) WCCardUsedStoreInfo *oneShopInfo;
@property (nonatomic) unsigned int controlflag;
@property (retain, nonatomic) NSString *advertiseWording;
@property (retain, nonatomic) NSString *advertiseUrl;
@property (retain, nonatomic) NSString *advertiseTinyAppUsername;
@property (retain, nonatomic) NSString *advertiseTinyAppPath;
@property (retain, nonatomic) NSString *publicServiceName;
@property (retain, nonatomic) NSString *publicServiceTip;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *acceptTitle;
@property (nonatomic) BOOL needDirectjump;
@property (retain, nonatomic) WCCardOperationRegion *announcement;
@property (retain, nonatomic) WCCardFieldItem *brandField;
@property (nonatomic) unsigned int genType;
@property (retain, nonatomic) NSString *cardTpId;
@property (retain, nonatomic) WCCardDetailInfo *detailInfo;
@property (retain, nonatomic) NSString *cardExt;
@property (retain, nonatomic) WCCardUseConditionInfo *usedCondition;
@property (retain, nonatomic) WCCardFollowBoxInfo *followBoxInfo;
@property (retain, nonatomic) WCCardActionSheet *guidanceAction;
@property (nonatomic) BOOL hasHongbao;
@property (nonatomic) BOOL isAcceptable;
@property (retain, nonatomic) NSString *unacceptableWording;
@property (nonatomic) BOOL isShowAcceptView;
@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) WCCardFieldItem *payAndQrcodeField;
@property (retain, nonatomic) DynamicQrCodeInfo *dynamicQrCodeItem;
@property (nonatomic) BOOL isCardCodeExposed;
@property (nonatomic) BOOL dismissQrcodeIconOnCard;
@property (nonatomic) unsigned int qrcodeCorrectLevel;
@property (nonatomic) BOOL isNeedLocation;
@property (retain, nonatomic) BluetoothInfo *bleInfo;
@property (retain, nonatomic) NSString *bizNickname;
@property (retain, nonatomic) NSString *giftTitle;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_color;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_logoName;
+ (void)PBArrayAdd_primaryFields;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
