@class NSString, DUXSwitch, DUXDivider, UIView, UILabel, AWEMRSubscribeManageSingleCard;

@interface AWEMRSubscribeSingleChannelPanelView : AWEMRSubscribeBasePanelView

@property (retain, nonatomic) AWEMRSubscribeManageSingleCard *card;
@property (retain, nonatomic) UIView *optionView;
@property (retain, nonatomic) UILabel *optionLabel;
@property (retain, nonatomic) DUXSwitch *aSwitch;
@property (retain, nonatomic) DUXDivider *divider;
@property (copy, nonatomic) NSString *optionText;
@property (readonly, nonatomic) BOOL switchOn;

- (id)middleView;
- (double)containerViewTopInset;
- (double)containerViewBottomInset;
- (id)initWithOptionViewDefaultOn:(BOOL)a0 valueChangedBlock:(id /* block */)a1;
- (void)setupContainerViewWithOption;
- (void)setupOptionView;
- (id)initWithDefault;
- (void)setupContainerView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
