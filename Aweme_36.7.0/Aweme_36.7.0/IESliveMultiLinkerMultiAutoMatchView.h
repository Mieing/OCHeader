@class RivalsRecommendResponse_AutoMatchInfo, NSString, UILabel, UIView, UIButton;

@interface IESliveMultiLinkerMultiAutoMatchView : UIView <IESLiveInteractiveUserServiceDelegate>

@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UIButton *matchButton;
@property (retain, nonatomic) UILabel *disabledMatchLabel;
@property (retain, nonatomic) UIButton *speedupButton;
@property (retain, nonatomic) UIView *speedUpView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) RivalsRecommendResponse_AutoMatchInfo *autoMatchInfo;
@property (nonatomic) BOOL isTimeOut;
@property (nonatomic) BOOL isDoubleInteract;
@property (copy, nonatomic) id /* block */ matchActionBlock;
@property (copy, nonatomic) id /* block */ speedUpActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)setupBaseView;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (id)initWithRecommendModel:(id)a0 isDoubleInteract:(BOOL)a1 diContext:(id)a2;
- (BOOL)isPassivelySync;
- (id)countDownStr:(long long)a0;
- (void)updateViewToPhase:(long long)a0;
- (void)speedButtonClicked;
- (void)setupMatchButton;
- (void)highWayStyle;
- (BOOL)isShowTimeCount;
- (id)predictWaitLabelText;
- (void)updateMatchButtonStyle;
- (id)speedUpFindingString;
- (void)onMatchButtonClicked;
- (id)predictWaitStrWithSec:(long long)a0;
- (void).cxx_destruct;

@end
