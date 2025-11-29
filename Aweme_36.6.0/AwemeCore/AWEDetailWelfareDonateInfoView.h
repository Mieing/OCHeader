@class AWEDetailDonateStateView, UILabel, UIView, UIButton;

@interface AWEDetailWelfareDonateInfoView : UIView

@property (retain, nonatomic) UIView *topSeperateLine;
@property (retain, nonatomic) UILabel *sponsorNameLabel;
@property (retain, nonatomic) AWEDetailDonateStateView *donateStateView;
@property (retain, nonatomic) UILabel *donateMoneyLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UILabel *donateMoneyTagLabel;
@property (retain, nonatomic) UILabel *userCountTagLabel;
@property (retain, nonatomic) UIButton *donateTipButton;

+ (id)formatedMoneyStringWithNumber:(id)a0;

- (void)updateToModel:(id)a0;
- (void)p_updateDonateViewStateWithModel:(id)a0;
- (void)p_updateDonateMoneyLabelWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
