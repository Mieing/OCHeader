@class EcsPresentPicInfo, EcsCombineCouponInfo, EcsMsgEncryInfo, EcsPresentOrderExpressFeeInfo, NSMutableArray, EcsMerchantEvaluationLotteryPresentInfo, EcsOrderFinderSecInfo, EcsProductSetInfo, EcsPresentPayInfo, NSString, EcsPriceInfo, EcsCorpPresentInfo, EcsActionClientInfo, FinderPresentInfo;

@interface EcsPresentOrderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *shopOrders;
@property (retain, nonatomic) EcsPriceInfo *priceInfo;
@property (retain, nonatomic) EcsPresentPayInfo *payInfo;
@property (retain, nonatomic) NSString *customerNotes;
@property (nonatomic) BOOL fromShoppingCart;
@property (nonatomic) unsigned int useNewAftersaleDeadline;
@property (nonatomic) unsigned int miniScene;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned long long predictCancelTime;
@property (nonatomic) unsigned long long agentFinderUin;
@property (nonatomic) BOOL getAgentFinderUinFail;
@property (retain, nonatomic) EcsOrderFinderSecInfo *submitSecInfo;
@property (retain, nonatomic) EcsOrderFinderSecInfo *sendSecInfo;
@property (retain, nonatomic) EcsOrderFinderSecInfo *acceptSecInfo;
@property (retain, nonatomic) EcsActionClientInfo *sendOrderClientInfo;
@property (nonatomic) unsigned int receiveExpiredTime;
@property (nonatomic) unsigned int sendType;
@property (retain, nonatomic) NSString *receiveGroupId;
@property (nonatomic) unsigned int presentSendTime;
@property (nonatomic) unsigned long long roomId;
@property (retain, nonatomic) NSString *fromusername;
@property (retain, nonatomic) NSString *giverNicknameSnapshot;
@property (retain, nonatomic) NSString *merchantNote;
@property (nonatomic) unsigned int allReceiveExpiredTime;
@property (retain, nonatomic) EcsPresentOrderExpressFeeInfo *expressFeeInfo;
@property (nonatomic) unsigned int expeditedDeliveryTime;
@property (retain, nonatomic) EcsMsgEncryInfo *msgEncryInfo;
@property (nonatomic) unsigned int handlePic;
@property (nonatomic) unsigned int facePresentOrderType;
@property (nonatomic) unsigned int takeMethod;
@property (retain, nonatomic) NSMutableArray *takeFailUserInfo;
@property (nonatomic) unsigned int allLotteryQuota;
@property (nonatomic) unsigned int chooseSkuType;
@property (retain, nonatomic) FinderPresentInfo *finderPresentInfo;
@property (nonatomic) BOOL hasConsumedFreegiftQuota;
@property (nonatomic) unsigned int cancelScene;
@property (nonatomic) unsigned int payerCannotRecv;
@property (nonatomic) unsigned int useMerchantPresentPic;
@property (retain, nonatomic) EcsPresentPicInfo *presentPicInfo;
@property (retain, nonatomic) NSString *merchantBrandName;
@property (retain, nonatomic) EcsCombineCouponInfo *combineCouponInfo;
@property (nonatomic) BOOL isB2CFreePresent;
@property (nonatomic) unsigned long long b2CActivityId;
@property (retain, nonatomic) EcsCorpPresentInfo *corpPresentInfo;
@property (nonatomic) BOOL isWxaPresent;
@property (retain, nonatomic) NSString *wxaUserName;
@property (nonatomic) unsigned int fromProductSet;
@property (retain, nonatomic) NSString *newmsgid;
@property (retain, nonatomic) EcsProductSetInfo *productSetInfo;
@property (nonatomic) unsigned int fromB2CPackage;
@property (retain, nonatomic) NSString *imunionRoomid;
@property (retain, nonatomic) NSString *imunionGiverOpenid;
@property (nonatomic) unsigned int lotteryDrawTime;
@property (nonatomic) unsigned int lotteryDrawStatus;
@property (retain, nonatomic) NSMutableArray *lotteryUserInfos;
@property (retain, nonatomic) EcsMerchantEvaluationLotteryPresentInfo *merchantEvaluationLotteryPresentInfo;
@property (nonatomic) unsigned int sendMsgWhenTake;
@property (nonatomic) unsigned long long origionShopOrderId;

+ (void)initialize;

@end
