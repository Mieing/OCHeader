@class AWEECOMIMSubCardOrderCard, AWEECOMIMCardComponentCommonTitleView, AWEECOMIMCardComponentMultiLabelView, AWEECOMIMCardComponentOperationPanel;

@interface AWEECOMIMOpenWorkCardView : AWEECOMIMCardBaseView

@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardOrderCard *orderCardView;
@property (retain, nonatomic) AWEECOMIMCardComponentMultiLabelView *descView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *btnPanel;

+ (double)heightWithWidth:(double)a0 model:(id)a1;
+ (BOOL)isDynamicHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateData;

@end
