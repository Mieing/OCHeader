@class NSData, NSString, MenuItem, BaseResponse, ReceiveOptionInfo, CoverInfo, NSMutableArray, QRActionInfo, ApplyCellInfo, ReceiptItemSettingInfo;

@interface CgiGetQrcodeUrlMchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *mchHeadImgUrl;
@property (retain, nonatomic) NSString *mchShopName;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) MenuItem *bottomItem;
@property (retain, nonatomic) NSString *bottomLeftIconUrl;
@property (nonatomic) BOOL bottomRightArrowFlag;
@property (retain, nonatomic) NSMutableArray *moreSettingCell;
@property (retain, nonatomic) QRActionInfo *screenShotAction;
@property (retain, nonatomic) QRActionInfo *longPressAction;
@property (nonatomic) unsigned int qrcodeLevel;
@property (nonatomic) unsigned int entranceType;
@property (retain, nonatomic) ApplyCellInfo *applyCell;
@property (retain, nonatomic) NSData *saveNotifyInfo;
@property (nonatomic) unsigned int refreshUrlInterval;
@property (nonatomic) BOOL receiveOptionEntrance;
@property (retain, nonatomic) ReceiveOptionInfo *receiveOptionInfo;
@property (retain, nonatomic) CoverInfo *applyMaskInfo;
@property (nonatomic) BOOL showShopFlag;
@property (nonatomic) unsigned long long currentShopId;
@property (retain, nonatomic) NSMutableArray *shopList;
@property (retain, nonatomic) NSString *selectShopDesc;
@property (retain, nonatomic) CoverInfo *applyMaskInfoV2;
@property (retain, nonatomic) ReceiptItemSettingInfo *receiptItemSettingInfo;
@property (retain, nonatomic) NSString *receiveSettingDesc;

+ (void)initialize;

@end
