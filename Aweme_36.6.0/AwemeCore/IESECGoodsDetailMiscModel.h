@class IESECBigSaleInfoModel, NSDictionary, IESECGoodsDetailButtonModel, IESECReplayInfoModel, IESECCombinationModel, IESECGoodsFeedTopicInfoModel, IESECGoodsDetailLynxModuleModel, NSString, IESECGoodsDetailAboardInfoModel, NSNumber, NSArray, IESECGoodsCategoryInfoModel, IESECHeadVideoModel;

@interface IESECGoodsDetailMiscModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *marketingChannel;
@property (copy, nonatomic) NSString *originType;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) NSString *similarType;
@property (copy, nonatomic) NSString *IMURL;
@property (copy, nonatomic) NSString *cartURL;
@property (copy, nonatomic) NSString *detailURL;
@property (copy, nonatomic) NSString *serviceURL;
@property (retain, nonatomic) IESECGoodsDetailAboardInfoModel *aboardInfo;
@property (copy, nonatomic) IESECGoodsDetailLynxModuleModel *modulesInfo;
@property (copy, nonatomic) NSDictionary *additionModulesData;
@property (copy, nonatomic) NSString *shopIconTitle;
@property (copy, nonatomic) NSString *shopIconURLScheme;
@property (copy, nonatomic) NSString *shopID;
@property (nonatomic) BOOL applyCoupon;
@property (nonatomic) BOOL isVirtual;
@property (nonatomic) BOOL outOfLimit;
@property (nonatomic) BOOL checkSKUInfo;
@property (retain, nonatomic) NSString *ultimateBuyAB;
@property (nonatomic) BOOL favorited;
@property (retain, nonatomic) NSNumber *visitorCount;
@property (retain, nonatomic) NSNumber *shopCartCount;
@property (retain, nonatomic) IESECReplayInfoModel *replayInfo;
@property (retain, nonatomic) IESECHeadVideoModel *headVideoModel;
@property (retain, nonatomic) IESECGoodsDetailButtonModel *buyButton;
@property (retain, nonatomic) NSArray *lamps;
@property (copy, nonatomic) NSString *trackExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL orderStatus;
@property (copy, nonatomic) NSString *entranceInfoJSONString;
@property (retain, nonatomic) IESECBigSaleInfoModel *bigSaleInfo;
@property (retain, nonatomic) NSArray *imageExtend;
@property (retain, nonatomic) IESECCombinationModel *combination;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *verifyInfo;
@property (readonly, copy, nonatomic) NSString *customTaxClearString;
@property (copy, nonatomic) NSString *shareTemplate;
@property (copy, nonatomic) NSArray *shoppingGuideAttrs;
@property (copy, nonatomic) NSString *shoppingGuideSchema;
@property (copy, nonatomic) NSString *imgSearchSchema;
@property (copy, nonatomic) NSString *titleSearchSchema;
@property (copy, nonatomic) NSString *screenShotSearchSchema;
@property (copy, nonatomic) NSDictionary *imgSearchParams;
@property (nonatomic) long long timeSKUCount;
@property (nonatomic) BOOL onlyTimeSku;
@property (retain, nonatomic) IESECGoodsFeedTopicInfoModel *topicInfo;
@property (retain, nonatomic) IESECGoodsCategoryInfoModel *categoryInfo;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) long long channelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lampsJSONTransformer;
+ (id)imageExtendJSONTransformer;
+ (id)shoppingGuideAttrsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
