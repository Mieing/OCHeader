@class NSString, PackActivityInfo, EmotionLinkInfo, PersonalDesigner, NSMutableArray, EmotionDesigner;

@interface EmotionDetail : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *packName;
@property (retain, nonatomic) NSString *packDesc;
@property (retain, nonatomic) NSString *packAuthInfo;
@property (retain, nonatomic) NSString *packPrice;
@property (nonatomic) unsigned int packType;
@property (nonatomic) unsigned int packFlag;
@property (nonatomic) unsigned int packThumbCnt;
@property (retain, nonatomic) NSMutableArray *packThumbList;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int packExpire;
@property (retain, nonatomic) NSString *packCopyright;
@property (retain, nonatomic) NSString *priceNum;
@property (retain, nonatomic) NSString *priceType;
@property (retain, nonatomic) NSString *panelUrl;
@property (retain, nonatomic) NSString *consumeProductId;
@property (nonatomic) unsigned int thumbExtCount;
@property (retain, nonatomic) NSMutableArray *thumbExtList;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *timeLimitStr;
@property (retain, nonatomic) NSString *shareDesc;
@property (retain, nonatomic) NSString *oldRedirectUrl;
@property (retain, nonatomic) EmotionDesigner *emotionDesigner;
@property (retain, nonatomic) PersonalDesigner *personalDesigner;
@property (retain, nonatomic) NSString *packActivity;
@property (retain, nonatomic) PackActivityInfo *packActivityInfo;
@property (nonatomic) unsigned int packWeCoinNum;
@property (nonatomic) unsigned int weCoinNum;
@property (retain, nonatomic) EmotionLinkInfo *emotionLinkInfo;

+ (void)initialize;

@end
