@class IESLiveMultiLinkerAutoMatchPanelConfig, IESLiveAnimatedImageView, UIImageView, NSString, UILabel, UIView, UIButton;

@interface IESLiveMultiLinkerAutoMatchPanel : HTSLivePopUpView <IESLiveInteractiveUserServiceDelegate>

@property (retain, nonatomic) IESLiveMultiLinkerAutoMatchPanelConfig *config;
@property (retain, nonatomic) UILabel *predictWaitLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *processExplainLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *speedUpView;
@property (retain, nonatomic) UIView *speedContainerView;
@property (retain, nonatomic) IESLiveAnimatedImageView *speedAnimView;
@property (retain, nonatomic) UIImageView *greySpeedUpIcon;
@property (nonatomic) BOOL isHighWay;
@property (nonatomic) BOOL isPassivelySync;
@property (nonatomic) long long phase;
@property (copy, nonatomic) id /* block */ cancelActionBlock;
@property (copy, nonatomic) id /* block */ speedUpActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)setupBaseView;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1 config:(id)a2;
- (id)countDownStr:(long long)a0;
- (void)buildlHighWayElements;
- (void)updateViewToPhase:(long long)a0;
- (void)multiLinkmicMultiMatchUpdate;
- (BOOL)isRandomIndividual;
- (BOOL)isMultiLinkmicAutoMatch;
- (void)speedButtonClicked;
- (void)updateExplainLabel;
- (BOOL)isMultiLinkmicDoubleMatch;
- (BOOL)isTeamMatch;
- (void).cxx_destruct;
- (void)didTapCancelButton;

@end
