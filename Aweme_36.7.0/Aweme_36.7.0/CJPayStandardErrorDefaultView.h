@class NSString, UIImageView, CJPayDynamicLayoutView, CJPayLoadingButton, CJPayLabel, NSMutableArray;

@interface CJPayStandardErrorDefaultView : UIView <CJPayStandardLocalThemeAdapterProtocol, CJPayBaseLoadingProtocol>

@property (copy, nonatomic) NSString *iconImageName;
@property (retain, nonatomic) CJPayDynamicLayoutView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) CJPayLabel *titleLabel;
@property (retain, nonatomic) CJPayLabel *subTitleLabel;
@property (retain, nonatomic) CJPayLoadingButton *clickBtn;
@property (retain, nonatomic) CJPayLabel *extraJumpLabel;
@property (retain, nonatomic) NSMutableArray *dynamicViewList;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ extraJumpAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateYAxisOffset:(double)a0;
- (id)p_createDynamicLayoutList;
- (void)cj_adapterForLocalTheme:(unsigned long long)a0;
- (void)setIconWithImageName:(id)a0;
- (void)p_clickBtnTapped;
- (void)p_extraJumpLabelTapped;
- (void)refreshErrorDefaultView;
- (void)setupCompactStyle;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)didMoveToWindow;

@end
