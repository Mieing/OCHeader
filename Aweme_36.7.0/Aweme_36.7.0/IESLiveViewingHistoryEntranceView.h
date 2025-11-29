@class UIButton, IESLiveViewingHistoryEntranceViewModel, UIView;

@interface IESLiveViewingHistoryEntranceView : UIView

@property (weak, nonatomic) UIView *yellowPointTipView;
@property (retain, nonatomic) IESLiveViewingHistoryEntranceViewModel *viewModel;
@property (retain, nonatomic) UIButton *historyButton;

- (void)configureUI;
- (void)historyButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
