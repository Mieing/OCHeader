@class AWEPOIProductInfoModel, AWEPOIDetailInfoProductCellViewModel;

@interface AWEPOIDetailNGProductComponentViewModel : DitoComponentViewModel

@property (retain, nonatomic) AWEPOIProductInfoModel *productInfo;
@property (retain, nonatomic) AWEPOIDetailInfoProductCellViewModel *bizViewModel;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)setupBizViewModel;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
