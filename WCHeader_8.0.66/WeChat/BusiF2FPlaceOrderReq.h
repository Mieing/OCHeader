@class BaseRequest, NSString, FavorComposeInfo, NSData, NSMutableArray;

@interface BusiF2FPlaceOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *receiverOpenid;
@property (retain, nonatomic) NSString *qrcodeId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *rcverDesc;
@property (retain, nonatomic) NSString *payerDesc;
@property (nonatomic) unsigned int totalAmount;
@property (nonatomic) unsigned int channel;
@property (retain, nonatomic) NSString *mchType;
@property (retain, nonatomic) NSString *rcvrTicket;
@property (retain, nonatomic) NSString *wifiBssid;
@property (nonatomic) unsigned int wifiUpdatatime;
@property (nonatomic) unsigned int mchTime;
@property (retain, nonatomic) NSString *receiverUsername;
@property (retain, nonatomic) FavorComposeInfo *favorComposeInfo;
@property (retain, nonatomic) NSString *favorRespSign;
@property (nonatomic) unsigned int scanScene;
@property (nonatomic) BOOL isRoot;
@property (nonatomic) BOOL isOpenTouch;
@property (retain, nonatomic) NSData *cpuId;
@property (retain, nonatomic) NSData *uid;
@property (retain, nonatomic) NSString *dynamicCodeUrl;
@property (retain, nonatomic) NSString *mchName;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *receiverTrueName;
@property (nonatomic) unsigned int dynamicCodeSource;
@property (retain, nonatomic) NSString *cancelF2Fid;
@property (nonatomic) unsigned int unpayType;
@property (nonatomic) unsigned int cancelReason;
@property (retain, nonatomic) NSString *amountRemindSign;
@property (retain, nonatomic) NSString *inputRecvName;
@property (retain, nonatomic) NSString *checkRecvNameSign;
@property (retain, nonatomic) NSMutableArray *extraBuyDetailInfos;
@property (nonatomic) unsigned int originAmount;
@property (retain, nonatomic) NSString *qqExtendInfo;
@property (nonatomic) BOOL enableUnionPay;
@property (nonatomic) BOOL installedUnionPay;
@property (retain, nonatomic) NSString *qrcodeSenderUsername;

+ (void)initialize;

@end
