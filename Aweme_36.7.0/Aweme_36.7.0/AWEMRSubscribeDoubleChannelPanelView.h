@class AWEMRSubscribeManageOptionCard;

@interface AWEMRSubscribeDoubleChannelPanelView : AWEMRSubscribeBasePanelView

@property (retain, nonatomic) AWEMRSubscribeManageOptionCard *leftOptionCard;
@property (retain, nonatomic) AWEMRSubscribeManageOptionCard *rightOptionCard;

- (double)containerViewTopInset;
- (double)containerViewBottomInset;
- (void)setupContainerView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
