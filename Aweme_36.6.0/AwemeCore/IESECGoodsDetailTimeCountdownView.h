@class UILabel, NSArray, IESECButton;

@interface IESECGoodsDetailTimeCountdownView : UIView

@property (retain, nonatomic) UILabel *preTextLabel;
@property (retain, nonatomic) IESECButton *dayButton;
@property (retain, nonatomic) IESECButton *hourButton;
@property (retain, nonatomic) IESECButton *minButton;
@property (retain, nonatomic) IESECButton *secondButton;
@property (retain, nonatomic) NSArray *dotArray;
@property (retain, nonatomic) UILabel *dayLabel;
@property (retain, nonatomic) UILabel *firstDotLabel;
@property (retain, nonatomic) UILabel *secondDotLabel;
@property (retain, nonatomic) UILabel *preLabel;
@property (nonatomic) long long prefixSize;
@property (nonatomic) long long timerSize;

- (id)extraLabel;
- (id)timeButton;
- (void)updateDayButton:(id)a0;
- (void)updateTextBGColor:(id)a0;
- (void)updateWith:(id)a0 textStyle:(id)a1 textBGColor:(id)a2;
- (void)updatePrefix:(id)a0;
- (void)updateCountdown:(id)a0;
- (void)updateWithSmallMode:(BOOL)a0;
- (void)updatePrefixSize:(long long)a0;
- (void)updateTimerSize:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
