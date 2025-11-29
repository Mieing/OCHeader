@class UILabel, AIAgentEntranceInfo, IESLiveCountTimer;

@interface IESLiveGuideAIAgentTipView : UIView

@property (retain, nonatomic) UILabel *leftContentLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) AIAgentEntranceInfo *aiAgentInfo;
@property (retain, nonatomic) IESLiveCountTimer *disappearTimer;
@property (copy, nonatomic) id /* block */ onTipBubbleDisappear;

- (double)getContentViewWidth:(id)a0;
- (void)setupGradientView;
- (id)initWithAgentInfo:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupTimer;
- (void)setupUI;

@end
