@class UIView, CJPaySignHeaderView, UIImageView, CJPaySignDescView, CJPayCommonProtocolView, CJPayStyleButton, CJPayAccountInsuranceTipView, MASConstraint, UILabel, CJPaySignModel;

@interface CJPaySignView : UIView

@property (retain, nonatomic) CJPaySignHeaderView *headerView;
@property (retain, nonatomic) CJPaySignDescView *serverDetailView;
@property (retain, nonatomic) CJPaySignDescView *deductTimeView;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UILabel *deductMethodTitleLabel;
@property (retain, nonatomic) UILabel *deductMethodLabel;
@property (retain, nonatomic) UIImageView *deductArrowImage;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) MASConstraint *divideLineTopToTime;
@property (retain, nonatomic) MASConstraint *divideLineTopToDetail;
@property (retain, nonatomic) CJPaySignModel *signModel;
@property (copy, nonatomic) id /* block */ confirmActionBlock;
@property (copy, nonatomic) id /* block */ changePayMethodBlock;
@property (nonatomic) long long viewType;

- (void)p_arrowClick;
- (void)updateWithSignModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithViewType:(long long)a0;

@end
