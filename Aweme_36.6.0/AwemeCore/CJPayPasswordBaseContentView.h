@class NSString, CJPayVerifyPasswordViewModel, CJPayCombineDetailView;

@interface CJPayPasswordBaseContentView : UIView

@property (retain, nonatomic) CJPayVerifyPasswordViewModel *viewModel;
@property (copy, nonatomic) NSString *tipsStr;
@property (retain, nonatomic) CJPayCombineDetailView *combineDetailView;
@property (nonatomic) BOOL isForceNormal;

- (void)p_setupUIForNormal;
- (id)initWithViewModel:(id)a0 isForceNormal:(BOOL)a1;
- (BOOL)p_shouldShowMarketingView;
- (void)p_setupUIForMarketing;
- (void)p_updateMarketingViewByDefaultConfig;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
