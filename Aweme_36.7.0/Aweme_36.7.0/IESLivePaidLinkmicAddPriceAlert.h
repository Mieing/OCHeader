@class NSString, UIImageView, IESLiveGCDTimer, UILabel, UIButton;

@interface IESLivePaidLinkmicAddPriceAlert : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *coinIcon;
@property (retain, nonatomic) UILabel *coinLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIButton *subBtn;
@property (retain, nonatomic) UIButton *addBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (nonatomic) long long rank;
@property (nonatomic) long long coin;
@property (retain, nonatomic) IESLiveGCDTimer *limitTimer;
@property (copy, nonatomic) id /* block */ onClickAddBtn;
@property (copy, nonatomic) id /* block */ onClickSubBtn;
@property (copy, nonatomic) id /* block */ onClickConfirmBtn;
@property (nonatomic) long long nextPrice;
@property (nonatomic) long long lastPrice;
@property (copy, nonatomic) NSString *alertTitlePrefix;

- (id)p_rankAttributeString;
- (void)p_updateSubAndAddBtnEnabled:(BOOL)a0;
- (void)p_clearLimitTimer;
- (void)p_subBtnClick;
- (void)p_addBtnClick;
- (void)p_confirmBtnClick;
- (void)p_startLimitTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rank:(long long)a1 coin:(long long)a2;
- (void)updateCoin:(long long)a0 rank:(long long)a1;
- (void)updateMultiAddPriceEnabled:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
