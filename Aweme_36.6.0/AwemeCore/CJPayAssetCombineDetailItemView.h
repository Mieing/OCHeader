@class UIImageView, CJPayLabel;

@interface CJPayAssetCombineDetailItemView : UIView

@property (retain, nonatomic) CJPayLabel *titleLabel;
@property (retain, nonatomic) CJPayLabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)cj_performanceMonitorName;
- (void)updateTitleText:(id)a0 descText:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
