@class CJPayResultDetailItemView, NSString, CJPayResultPageView, UILabel, CJPaySignOnlyBindBytePayResultDesc;

@interface CJPaySignOnlyResultPageViewController : CJPayHalfPageBaseViewController <CJPayResultPageViewDelegate>

@property (retain, nonatomic) CJPayResultPageView *resultView;
@property (nonatomic) long long stateType;
@property (retain, nonatomic) CJPayResultDetailItemView *successDescView;
@property (retain, nonatomic) UILabel *failDescLabel;
@property (nonatomic) BOOL isFromOuterApp;
@property (retain, nonatomic) CJPaySignOnlyBindBytePayResultDesc *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)p_setupNaviBar;
- (void)p_update;
- (void)stateButtonClick:(id)a0;
- (void)closeActionAfterTime:(long long)a0;
- (long long)p_stateTypeWithSignStatus:(id)a0;
- (void)p_setStateWithType:(long long)a0;
- (id)p_iconWithStatus:(long long)a0;
- (id)p_descTitleWithOrderStatus:(unsigned long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
