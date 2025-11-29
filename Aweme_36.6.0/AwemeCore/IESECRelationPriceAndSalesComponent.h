@class NSString, IESECGoodsPriceLabel, UILabel, IESECWindowPreloadCompoentObject;

@interface IESECRelationPriceAndSalesComponent : UIView <IESECLLComponent, IESECWindowPreloadComponentProtocol> {
    IESECWindowPreloadCompoentObject *preloadObj;
}

@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *salesLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPreloadCompoentObjectWihtModel:(id)a0;
+ (id /* block */)priceAndSalesWithConfig:(id)a0;
+ (id /* block */)priceAndSales;

- (void)updateUIWithModel:(id)a0;
- (void)setPreloadObj:(id)a0;
- (id)preloadObj;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
