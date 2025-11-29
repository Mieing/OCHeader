@class CJPayTouchLabel, NSTimer, UIImageView, CJPayButton, UILabel, CJPayDyTextPopUpModel, UIView;

@interface CJPayDyTextPopUpViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayTouchLabel *contentLabel;
@property (retain, nonatomic) CJPayButton *mainOperation;
@property (retain, nonatomic) CJPayButton *secondOperation;
@property (retain, nonatomic) CJPayButton *thirdOperation;
@property (retain, nonatomic) CJPayDyTextPopUpModel *model;
@property (retain, nonatomic) CJPayButton *closeBtn;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isOuterContentView;
@property (retain, nonatomic) NSTimer *countdownTimer;
@property (nonatomic) long long countdown;

- (void)p_closePage;
- (id)initWithPopUpModel:(id)a0;
- (id)initWithPopUpModel:(id)a0 contentView:(id)a1;
- (void)showOnTopVC:(id)a0;
- (void)p_clickMainOperation;
- (void)p_updateMainOperationWithCountDown:(long long)a0;
- (void)p_onTimerTriggered;
- (void)p_updateContentText:(id)a0;
- (long long)p_mapAlignment:(unsigned long long)a0;
- (void)p_clickSecondOperation;
- (void)p_clickThirdOperation;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
