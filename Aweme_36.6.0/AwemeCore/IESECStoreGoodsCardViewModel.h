@class IESECGoodsRitTagModel, NSArray, IESECShopGoodsModel, IESECShopGoodsStatusInfo, NSString, IESECURLModel, NSNumber;

@interface IESECStoreGoodsCardViewModel : NSObject

@property (retain, nonatomic) IESECShopGoodsModel *model;
@property (readonly, nonatomic) BOOL showGoodsStatusArea;
@property (readonly, copy, nonatomic) IESECShopGoodsStatusInfo *goodsStatusInfo;
@property (readonly, copy, nonatomic) NSArray *goodsImageArray;
@property (readonly, nonatomic) BOOL showVerticalImage;
@property (readonly, copy, nonatomic) NSArray *verticalGoodsImageArray;
@property (readonly, copy, nonatomic) NSString *goodsTitle;
@property (readonly, copy, nonatomic) NSArray *goodsTitleTagArray;
@property (readonly, nonatomic) BOOL showGoodsTagArea;
@property (readonly, nonatomic) BOOL isSecKill;
@property (readonly, copy, nonatomic) NSArray *discountTagArray;
@property (readonly, copy, nonatomic) NSArray *serviceTagArray;
@property (readonly, copy, nonatomic) NSString *goodsPricePrefix;
@property (readonly, nonatomic) IESECShopGoodsModel *goodsPriceModel;
@property (readonly, copy, nonatomic) NSString *goodsSalesCount;
@property (readonly, nonatomic) BOOL hideSales;
@property (readonly, nonatomic) BOOL showRecommendInfoArea;
@property (readonly, copy, nonatomic) IESECGoodsRitTagModel *recommendRitTag;
@property (readonly, nonatomic) BOOL showGoodsJumpArea;
@property (readonly, nonatomic) IESECURLModel *goodsJumpIcon;
@property (readonly, copy, nonatomic) NSString *goodsJumpText;
@property (readonly, copy, nonatomic) NSString *goodsJumpUrl;
@property (readonly, nonatomic) BOOL showGoodsPromotionVideo;
@property (readonly, nonatomic) BOOL showGoodsMainVideo;
@property (readonly, copy, nonatomic) NSString *goodsVideoID;
@property (readonly, copy, nonatomic) NSString *goodsMainVideoURL;
@property (readonly, copy, nonatomic) NSNumber *goodsMainVideoDuration;
@property (readonly, nonatomic) BOOL showGoodsLive;
@property (readonly, copy, nonatomic) NSString *goodsLiveStreamData;
@property (readonly, nonatomic) BOOL cartDisable;
@property (readonly, copy, nonatomic) NSString *cartClickToast;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) BOOL showAddCart;
@property (readonly, copy, nonatomic) NSString *goodsContentForm;
@property (readonly, nonatomic) BOOL merchantStatus;

- (BOOL)titleShouldShowMiddleTitle;
- (double)convertStringToInt:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
