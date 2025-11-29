@class UIImageView, NSTimer, IESLiveInteractiveBattleAnnounceViewConfig, IESLiveCircleRollLabel, UIButton;
@protocol IESLiveInteractiveBattleAnnounceViewDelegate;

@interface IESLiveInteractiveBattleAnnounceView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESLiveCircleRollLabel *currentLabel;
@property (retain, nonatomic) IESLiveCircleRollLabel *nextLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) int currentIndex;
@property (retain, nonatomic) IESLiveInteractiveBattleAnnounceViewConfig *config;
@property (nonatomic) double showingLabelTop;
@property (nonatomic) double dismissLabelTop;
@property (nonatomic) double willAppearLabelTop;
@property (nonatomic) BOOL isRolling;
@property (weak, nonatomic) id<IESLiveInteractiveBattleAnnounceViewDelegate> delegate;

- (void)didClickClose;
- (id)traceParams;
- (void)traceAnnounceViewShow;
- (void)reportReadAnnoundce;
- (void)traceAnnounceViewClose;
- (void)showNextMessage;
- (id)getNextData;
- (id)initWithConfig:(id)a0 DIContext:(id)a1;
- (void).cxx_destruct;
- (void)appear;
- (void)setupUI;

@end
