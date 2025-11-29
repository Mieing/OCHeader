@class UILabel, CJPayWithDrawResultMethodView, NSString;

@interface CJPayWithDrawResultArrivingView : UIView

@property (retain, nonatomic) UILabel *methodTitleLabel;
@property (retain, nonatomic) UILabel *timeTitleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CJPayWithDrawResultMethodView *methodView;
@property (retain, nonatomic) UILabel *defaultReasonTitleLabel;
@property (retain, nonatomic) UILabel *defaultReasonLabel;
@property (copy, nonatomic) NSString *methodText;
@property (copy, nonatomic) id /* block */ didTapReasonBlock;

- (void)addDisclosureEventToView:(id)a0;
- (void)disclosureReasonEvent:(id)a0;
- (void)updateDefaultReasonHiddenStatus:(BOOL)a0;
- (void)updateWithAccountText:(id)a0 accountIconUrl:(id)a1 status:(unsigned long long)a2 timeText:(id)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;

@end
