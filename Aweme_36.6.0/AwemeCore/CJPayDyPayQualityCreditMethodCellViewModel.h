@class NSString;

@interface CJPayDyPayQualityCreditMethodCellViewModel : CJPayDyPayQualityMethodCellViewModel

@property (copy, nonatomic) NSString *creditInstallment;

- (Class)getViewClass;
- (BOOL)hasShowDiscountTag;
- (double)topMarginHeight;
- (BOOL)hasInstallmentPayment;
- (void).cxx_destruct;
- (double)viewHeight;

@end
