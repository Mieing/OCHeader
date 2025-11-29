@class IESECSKUDisplayConfig, IESECSKUInfo, NSDictionary, IESECSKUDetailContext, IESECSKUCouponViewModel, IESECSKUNewPriceModel, IESECURLModel, UIColor, NSString, IESECSKUPrice, NSAttributedString, IESECDiscountPrice, IESECSKUModel, NSArray, NSNumber;

@interface IESECSKUTopViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECDiscountPrice *discountPrice;
@property (retain, nonatomic) IESECSKUPrice *price;
@property (retain, nonatomic) IESECURLModel *activityIcon;
@property (copy, nonatomic) NSDictionary *imagesMap;
@property (readonly, copy, nonatomic) NSString *selectCover;
@property (readonly, copy, nonatomic) NSString *stockInfo;
@property (readonly, nonatomic) BOOL showStockInfo;
@property (readonly, copy, nonatomic) NSString *installmentInfo;
@property (readonly, nonatomic) BOOL hasInstallmentText;
@property (readonly, copy, nonatomic) NSAttributedString *installmentInfoAttr;
@property (readonly, copy, nonatomic) NSString *selectedSKUInfo;
@property (readonly, copy, nonatomic) NSString *depositPrice;
@property (readonly, nonatomic) BOOL isSeckill;
@property (readonly, nonatomic) BOOL isGroupBuy;
@property (readonly, nonatomic) BOOL isDepositPresale;
@property (readonly, nonatomic) IESECSKUInfo *curSKUInfo;
@property (readonly, copy, nonatomic) NSString *curSkuID;
@property (readonly, copy, nonatomic) NSArray *titles;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSArray *bigImages;
@property (readonly, nonatomic) unsigned long long imageIndex;
@property (readonly, nonatomic) IESECSKUDisplayConfig *displayConfig;
@property (retain, nonatomic) IESECSKUCouponViewModel *couponViewModel;
@property (readonly, nonatomic) UIColor *atmosphereColor;
@property (readonly, nonatomic) IESECSKUNewPriceModel *minPriceModel;
@property (readonly, nonatomic) IESECSKUNewPriceModel *discountPriceModel;
@property (readonly, nonatomic) IESECSKUNewPriceModel *regularPriceModel;
@property (retain, nonatomic) NSNumber *priceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEventName:(id)a0;
- (long long)stockNum;
- (void)skuModuleShow:(id)a0 extra:(id)a1 once:(BOOL)a2;
- (void)skuModuleClick:(id)a0 extra:(id)a1;
- (id)initWithSKUModel:(id)a0 detailContext:(id)a1;
- (void)previewDidmissAtIndex:(long long)a0;
- (long long)getShowPriceStyle;
- (BOOL)isSelectedAllSKUSel;
- (id)headerTag;
- (BOOL)isHeaderTagPositionTop;
- (long long)getDiscountStyle;
- (long long)getSelectedCount;
- (id)selectedSKUSecondOriginPriceString;
- (id)groupBuyPriceTag;
- (void).cxx_destruct;
- (id)activityText;

@end
