@class NSString, NSArray, AWEECOMIMSubCardRightsParamsModel;

@interface AWEECOMIMGoodsCardModel : AWEECOMIMBaseCardModel <AWEECOMIMSubCardProductSalesCardProtocol, AWEECOMIMCardComponentOperationPanelProtocol, AWEECOMIMSubCardRightsProtocol>

@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *showPrice;
@property (copy, nonatomic) NSString *sellNum;
@property (nonatomic) unsigned long long goodsStatus;
@property (copy, nonatomic) NSString *productUrl;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *skuUrl;
@property (copy, nonatomic) NSArray *rightsItemArr;
@property (copy, nonatomic) NSString *displayRightsText;
@property (retain, nonatomic) AWEECOMIMSubCardRightsParamsModel *rightsParamsData;
@property (copy, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardMsgModelClassFromMessage:(id)a0;
+ (Class)cardViewClass;
+ (unsigned long long)goodsStatusDesc:(id)a0;

@end
