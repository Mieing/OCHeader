@class NSString, EcsOrderProductBulkBuyInfo, EcsGreetingCardInfo;

@interface EcsPresentOrderProductInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned long long skuId;
@property (nonatomic) unsigned int productCnt;
@property (nonatomic) unsigned int qualityInspectType;
@property (nonatomic) BOOL isFreeGift;
@property (nonatomic) BOOL multipleSku;
@property (nonatomic) unsigned int presentCnt;
@property (nonatomic) unsigned int productCntPerPresent;
@property (nonatomic) unsigned int chooseSkuType;
@property (nonatomic) BOOL payExtraFreight;
@property (retain, nonatomic) EcsGreetingCardInfo *greetingCardInfo;
@property (nonatomic) unsigned long long b2CActivityId;
@property (retain, nonatomic) NSString *customerNotes;
@property (retain, nonatomic) EcsOrderProductBulkBuyInfo *productBulkbuyInfo;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *promoterKey;
@property (retain, nonatomic) NSString *entranceGmsgId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sessionItemSerialize64Str;
@property (retain, nonatomic) NSString *preheatId;
@property (nonatomic) unsigned long long leagueFinderUin;
@property (retain, nonatomic) NSString *presentKey;

+ (void)initialize;

@end
