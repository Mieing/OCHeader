@class UIView, NSString, NSArray, AWEECShareBenefitInfo, NSDictionary, AWEURLModel, AWEECShareReflowDialogInfoModel, AWEShareSpikeModel, NSNumber;
@protocol BDXViewContainerProtocol;

@interface AWEShareGoodsModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *goodsOwnerID;
@property (copy, nonatomic) NSDictionary *metaParams;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *longTitle;
@property (copy, nonatomic) NSString *shareURL;
@property (retain, nonatomic) AWEURLModel *icon;
@property (nonatomic) unsigned long long sales;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSString *priceSuffix;
@property (retain, nonatomic) NSString *messageContent;
@property (retain, nonatomic) NSNumber *messageType;
@property (nonatomic) unsigned long long userCount;
@property (nonatomic) unsigned long long promotionSource;
@property (nonatomic) BOOL isSeckillChannel;
@property (retain, nonatomic) AWEShareSpikeModel *spikeModel;
@property (copy, nonatomic) NSArray *reliableImages;
@property (copy, nonatomic) NSString *goodsSchema;
@property (copy, nonatomic) NSString *shareIMGoodsSchema;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (nonatomic) BOOL isExplosiveSubsidyGoods;
@property (nonatomic) BOOL isShowLinkCopy;
@property (copy, nonatomic) NSString *textFormatForCopy;
@property (copy, nonatomic) NSString *titleForStory;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) long long channelType;
@property (copy, nonatomic) NSDictionary *logInfo;
@property (nonatomic) BOOL shareImageLoadQRCodeImageSuccess;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *qrImageView;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *posterImageView;
@property (retain, nonatomic) NSArray *qrCodeUrlList;
@property (nonatomic) BOOL isSecretTokenSchemaFetched;
@property (nonatomic) BOOL isShopGuideGoods;
@property (copy, nonatomic) NSString *shopGuideId;
@property (nonatomic) BOOL isFromProductDetailPage;
@property (copy, nonatomic) NSString *dataJson;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *shareId;
@property (copy, nonatomic) NSString *decisionUrl;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *shareExtraInfo;
@property (copy, nonatomic) NSString *bcmShareInfo;
@property (retain, nonatomic) AWEECShareReflowDialogInfoModel *posterLynxInfo;
@property (retain, nonatomic) AWEECShareReflowDialogInfoModel *qrLynxInfo;
@property (copy, nonatomic) NSString *nGroupBuyToken;
@property (nonatomic) BOOL isSubsidyNGroupGoods;
@property (retain, nonatomic) AWEECShareBenefitInfo *benefitInfo;
@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) NSArray *actionList;
@property (copy, nonatomic) NSString *metaParamsStr;
@property (nonatomic) BOOL disableToken;
@property (nonatomic) BOOL isMarketPanel;

+ (id)modelWithGoods:(id)a0 awemeID:(id)a1 owner:(id)a2 paramString:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
