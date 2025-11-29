@class NSArray, NSString;

@interface AWEECOMIMTransferUserToShopCardModel : AWEECOMIMBaseCardModel <AWEECOMIMCardComponentCommonTitleViewProtocol, AWEECOMIMSubCardProductSalesCardProtocol, AWEECOMIMSubCardOrderCardProtocol, AWEECOMIMCardComponentMultiIconLabelViewProtocol>

@property (copy, nonatomic) NSArray *multiLineIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *productUrl;
@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *showPrice;
@property (copy, nonatomic) NSString *sellNum;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *goodNum;
@property (copy, nonatomic) NSArray *multiLineDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardViewClass;

- (void)updateModelWithData:(id)a0 encrypted:(BOOL)a1;
- (id)iconForIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
