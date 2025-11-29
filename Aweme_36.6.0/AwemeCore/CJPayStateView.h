@class CJPayImageLabelStateView, NSDictionary, NSString;
@protocol CJPayStateDelegate;

@interface CJPayStateView : UIView <CJPayImageLabelStateViewDelegate>

@property (retain, nonatomic) CJPayImageLabelStateView *stateView;
@property (nonatomic) long long stateType;
@property (copy, nonatomic) NSDictionary *showConfig;
@property (weak, nonatomic) id<CJPayStateDelegate> delegate;
@property (copy, nonatomic) NSString *pageDesc;
@property (copy, nonatomic) NSString *buttonDesc;
@property (nonatomic) BOOL isPaymentForOuterApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_titleAttributedStrWithFrontStr:(id)a0 latterStr:(id)a1;
+ (id)updateTitleWithContent:(id)a0 amount:(id)a1;
+ (id)updateTitleWithContent:(id)a0;
+ (id)updateTitleWithContent:(id)a0 desc:(id)a1;

- (void)clickBtn:(id)a0;
- (void)updateShowConfigsWithType:(long long)a0 model:(id)a1;
- (void)startState:(long long)a0;
- (void)p_setShowConfigs;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
