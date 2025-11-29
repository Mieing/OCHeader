@class PresentOrderInfo_EcsGiftInfo_WordingWithTips, NSString, EcsJumpInfo, PresentOrderInfo_EcsGiftInfo_AddressStatusInfo, PresentOrderInfo_EcsGiftInfo_StatusActionInfo, EcsAddressInfo, NSMutableArray;

@interface PresentOrderInfo_EcsGiftInfo_GiftItemInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long orderid;
@property (retain, nonatomic) NSString *skuimgurl;
@property (retain, nonatomic) NSString *skutitle;
@property (retain, nonatomic) NSString *skusaleparams;
@property (nonatomic) unsigned long long skuprice;
@property (retain, nonatomic) EcsAddressInfo *address;
@property (nonatomic) unsigned int giftstatus;
@property (retain, nonatomic) EcsJumpInfo *changeSkuJumpInfo;
@property (nonatomic) unsigned int canChangeSku;
@property (nonatomic) unsigned long long skuId;
@property (nonatomic) unsigned int isskuchange;
@property (retain, nonatomic) NSString *bgstartcolor;
@property (retain, nonatomic) NSString *bgendcolor;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *realappid;
@property (retain, nonatomic) NSString *orderStatusText;
@property (retain, nonatomic) NSString *orderStatusTips;
@property (nonatomic) unsigned long long subOrderId;
@property (nonatomic) unsigned int orderStatusTipsType;
@property (nonatomic) unsigned int statusDeadline;
@property (nonatomic) unsigned int addressChanged;
@property (nonatomic) unsigned int deliveryMethod;
@property (retain, nonatomic) NSMutableArray *categorys;
@property (retain, nonatomic) EcsJumpInfo *productDetailJumpInfo;
@property (nonatomic) unsigned int skuChanged;
@property (retain, nonatomic) NSString *receiveHeadImgUrl;
@property (retain, nonatomic) NSString *giverHeadImgUrl;
@property (retain, nonatomic) NSString *receiverNickName;
@property (retain, nonatomic) NSString *giverNickName;
@property (retain, nonatomic) NSMutableArray *freeGiftInfos;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *statuswording;
@property (nonatomic) unsigned int statusstyle;
@property (nonatomic) unsigned int statusversion;
@property (nonatomic) unsigned int ismultiplesku;
@property (nonatomic) unsigned int hasThanks;
@property (retain, nonatomic) NSString *thanksWording;
@property (retain, nonatomic) NSString *detailstatuswording;
@property (retain, nonatomic) NSMutableArray *statusActions;
@property (retain, nonatomic) NSMutableArray *detailStatusActions;
@property (retain, nonatomic) NSMutableArray *storeCanUseActions;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_WordingWithTips *storeCanUseInfo;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_AddressStatusInfo *addressStatusInfo;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_StatusActionInfo *sendThanksAction;
@property (retain, nonatomic) PresentOrderInfo_EcsGiftInfo_StatusActionInfo *changeSkuAction;
@property (retain, nonatomic) NSMutableArray *presentProductTag;
@property (nonatomic) unsigned long long defaultSkuId;
@property (nonatomic) unsigned int productCnt;

+ (void)initialize;

@end
