@class IESLLPOIProductInfoModel, IESLLPOIDetailInfoProductCellViewModel;

@interface IESLLPOIDetailNGProductComponentViewModel : LLDitoComponentViewModel

@property (retain, nonatomic) IESLLPOIProductInfoModel *productInfo;
@property (retain, nonatomic) IESLLPOIDetailInfoProductCellViewModel *bizViewModel;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)setupBizViewModel;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
