@class IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader, NSString, UILabel, UIButton;

@interface IESLivePaidQueueTabView : UIView

@property (retain, nonatomic) UIButton *paidQueueBtn;
@property (retain, nonatomic) UIButton *normalQueueBtn;
@property (retain, nonatomic) IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader *guidenceLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIButton *ruleButton;
@property (copy, nonatomic) id /* block */ openPaidLinkBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (nonatomic) unsigned long long selectedTab;
@property (copy, nonatomic) NSString *rightLabelText;
@property (nonatomic) BOOL hasLinkPaidGudience;
@property (copy, nonatomic) id /* block */ didSelectedTabCallback;

- (void)p_setupSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diContext:(id)a1;
- (void)updateNormalWaitingCount:(long long)a0 paidWaitingCount:(long long)a1;
- (void)updateSelectedTab:(unsigned long long)a0;
- (void)setCloseGudienceBlock:(id /* block */)a0;
- (void)p_normalQueueBtnClick;
- (void)p_paidQueueBtnClick;
- (void).cxx_destruct;

@end
