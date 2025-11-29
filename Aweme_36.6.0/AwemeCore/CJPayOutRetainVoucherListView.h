@class NSArray, NSString, CJPayDynamicLayoutView;

@interface CJPayOutRetainVoucherListView : UIView <CJPayDynamicLayoutViewDelegate>

@property (retain, nonatomic) CJPayDynamicLayoutView *voucherShowView;
@property (copy, nonatomic) NSArray *dynamicViewList;
@property (copy, nonatomic) NSArray *array;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
